#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int gap;
    if (c - b > b - a)
    {
        gap = c - b;
    }
    else
    {
        gap = b - a;
    }
    gap--;
    cout << gap;
}