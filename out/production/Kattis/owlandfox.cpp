#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc > 0)
    {
        int k;
        cin >> k;
        if (k % 10 != 0)
        {
            cout << k - 1 << "\n";
        }
        else
        {
            if (k == 1 || k == 10 || k == 100 || k == 1000 || k == 10000 || k == 100000)
            {
                cout << 0 << "\n";
            }
            else
            {
                int curr = 10;
                int temp = k;
                while (true)
                {
                    temp /= 10;
                    if (temp % 10 == 0)
                    {
                        curr *= 10;
                    }
                    else
                    {
                        k -= (curr);
                        cout << k << "\n";
                        break;
                    }
                }
            }
        }
        tc--;
    }
}