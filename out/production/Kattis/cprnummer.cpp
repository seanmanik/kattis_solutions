#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int total = 0;
    for (int i = 0; i < 11; i++)
    {
        if (i == 6)
        {
            continue;
        }
        char c = s[i];
        int curr = c - '0';
        if (i == 0)
        {
            total += (curr * 4);
        }
        else if (i == 1)
        {
            total += (curr * 3);
        }
        else if (i == 2)
        {
            total += (curr * 2);
        }
        else if (i == 3)
        {
            total += (curr * 7);
        }
        else if (i == 4)
        {
            total += (curr * 6);
        }
        else if (i == 5)
        {
            total += (curr * 5);
        }
        else if (i == 7)
        {
            total += (curr * 4);
        }
        else if (i == 8)
        {
            total += (curr * 3);
        }
        else if (i == 9)
        {
            total += (curr * 2);
        }
        else if (i == 10)
        {
            total += curr;
        }
    }
    if (total % 11 == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}