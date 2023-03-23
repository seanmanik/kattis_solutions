#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long gcd(long long x, long long y)
{
    long long rem;
    while (y > 0)
    {
        rem = x % y;
        x = y;
        y = rem;
    }
    return x;
}
int main()
{
    int a;
    cin >> a;
    vector<long long> aVal;
    vector<long long> bVal;
    bool hasZero = false;
    for (int i = 0; i < a; i++)
    {
        long long k;
        cin >> k;
        if (k == 0)
        {
            hasZero = true;
        }
        aVal.push_back(k);
    }
    int b;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        long long k;
        cin >> k;
        if (k == 0)
        {
            hasZero = true;
        }
        bVal.push_back(k);
    }
    if (hasZero)
    {
        cout << 0;
        return 0;
    }
    long long ans = 1;
    bool modded = false;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            long long currGcd;
            if (aVal[i] < bVal[j])
            {
                currGcd = gcd(aVal[i], bVal[j]);
            }
            else
            {
                currGcd = gcd(bVal[j], aVal[i]);
            }
            if (currGcd != 1)
            {
                ans *= currGcd;
                if (ans > 1000000000)
                {
                    ans %= 1000000000;
                    modded = true;
                }
                aVal[i] /= currGcd;
                bVal[j] /= currGcd;
            }
        }
    }
    if (ans > 999999999)
    {
        string s = to_string(ans);
        for (int i = s.size() - 9; i < s.size(); i++)
        {
            cout << s[i];
        }
    }
    else if (modded)
    {
        string s = to_string(ans);
        int len = s.size();
        int to_print = 9 - len;
        for (int i = 0; i < to_print; i++)
        {
            cout << 0;
        }
        cout << s;
    }
    else
    {
        cout << ans;
    }
}