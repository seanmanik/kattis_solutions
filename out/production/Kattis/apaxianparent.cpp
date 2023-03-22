#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int lenA = a.size();
    if (a[lenA - 1] == 'e')
    {
        cout << a << "x" << b;
    }
    else
    {
        char last = a[lenA - 1];
        if (last == 'a' || last == 'i' || last == 'o' || last == 'u')
        {
            for (int i = 0; i < lenA - 1; i++)
            {
                cout << a[i];
            }
            cout << "ex" << b;
        }
        else if (a[lenA - 2] == 'e' && last == 'x')
        {
            cout << a << b;
        }
        else
        {
            cout << a << "ex" << b;
        }
    }
}