#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc > 0)
    {
        int currDataSet, days;
        cin >> currDataSet >> days;
        int sum = 0;
        while (days > 0)
        {
            sum += (days + 1);
            days--;
        }
        cout << currDataSet << " " << sum << "\n";
        tc--;
    }
}