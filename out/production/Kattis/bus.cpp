#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc > 0)
    {
        int n;
        cin >> n;
        int total = 1;
        while (n > 0)
        {
            total *= 2;
            n--;
        }
        total--;
        cout << total << "\n";
        tc--;
    }
}