#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    if (n % 2 == 0)
    {
        if (a == b)
        {
            cout << "Deletion succeeded";
        }
        else
        {
            cout << "Deletion failed";
        }
    }
    else
    {
        string c = "";
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '1')
            {
                c += "0";
            }
            else
            {
                c += "1";
            }
        }
        if (b == c)
        {
            cout << "Deletion succeeded";
        }
        else
        {
            cout << "Deletion failed";
        }
    }
}