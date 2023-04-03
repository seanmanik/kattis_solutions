#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s[0];
    char prev = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == prev)
        {
            prev = s[i];
        }
        else
        {
            cout << s[i];
            prev = s[i];
        }
    }
}