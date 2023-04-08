#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int rem = a + b;
    int total = 0;
    while (rem >= c)
    {
        int remain = rem % c;
        rem -= remain;
        int exchange = rem / c;
        total += exchange;
        rem = remain + exchange;
    }
    cout << total;
}