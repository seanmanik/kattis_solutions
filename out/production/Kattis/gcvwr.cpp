#include <iostream>
using namespace std;

int main()
{
    int g, t, n;
    cin >> g >> t >> n;
    int rem = g - t;
    rem *= 0.9;
    while (n > 0)
    {
        int curr;
        cin >> curr;
        rem -= curr;
        n--;
    }
    cout << rem;
}