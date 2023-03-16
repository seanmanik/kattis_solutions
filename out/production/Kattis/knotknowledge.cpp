#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        total += k;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int k;
        cin >> k;
        total -= k;
    }
    cout << total;
}