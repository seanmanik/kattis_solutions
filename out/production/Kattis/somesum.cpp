#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    if (k == 1)
    {
        cout << "Either";
    }
    else if (k % 2 == 0)
    {
        if (k == 4 || k == 8)
        {
            cout << "Even";
        }
        else
        {
            cout << "Odd";
        }
    }
    else
    {
        cout << "Either";
    }
}