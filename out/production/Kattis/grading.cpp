#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, curr;
    cin >> a >> b >> c >> d >> e >> curr;
    if (curr >= a)
    {
        cout << "A";
    }
    else if (curr >= b)
    {
        cout << "B";
    }
    else if (curr >= c)
    {
        cout << "C";
    }
    else if (curr >= d)
    {
        cout << "D";
    }
    else if (curr >= e)
    {
        cout << "E";
    }
    else
    {
        cout << "F";
    }
}