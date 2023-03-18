#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a > 0)
    {
        int k, b, n;
        cin >> k >> b >> n;
        int total = 0;
        while (n > 0)
        {
            int rem = n % b;
            total += (rem * rem);
            n /= b;
        }
        cout << k << " " << total << "\n";
        a--;
    }
}