#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a == "OCT")
    {
        if (b == "31")
        {
            cout << "yup";
        }
        else
        {
            cout << "nope";
        }
    }
    else if (a == "DEC")
    {
        if (b == "25")
        {
            cout << "yup";
        }
        else
        {
            cout << "nope";
        }
    }
    else
    {
        cout << "nope";
    }
}