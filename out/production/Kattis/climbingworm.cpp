#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int total = 0;
    int counter = 0;
    while (total < c)
    {
        total += a;
        if (total >= c)
        {
            cout << counter + 1;
            return 0;
        }
        total -= b;
        counter++;
    }
    cout << counter;
}