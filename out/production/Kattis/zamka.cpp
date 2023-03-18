#include <iostream>

using namespace std;

int getDigitsSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int l, d, x;
    cin >> l >> d >> x;
    int n = l;
    int m = d;
    while (n <= d)
    {
        int k = getDigitsSum(n);
        if (k == x)
        {
            break;
        }
        n++;
    }
    while (m >= l)
    {
        int k = getDigitsSum(m);
        if (k == x)
        {
            break;
        }
        m--;
    }
    cout << n << "\n"
         << m;
}
