#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int a, b;
    a = (s[0] - '0') * 10 + s[1] - '0';
    b = (s[3] - '0') * 10 + s[4] - '0';
    if (a > 12)
    {
        cout << "EU";
    }
    else if (b > 12)
    {
        cout << "US";
    }
    else
    {
        cout << "either";
    }
}