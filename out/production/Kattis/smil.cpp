#include <iostream>
using namespace std;

void findSmiles(string &s, int len)
{
    for (int i = 0; i < len; i++)
    {
        char c = s[i];
        if (s[i] == ':' || s[i] == ';')
        {
            if (i + 1 < len && s[i + 1] == ')')
            {
                cout << i << "\n";
                i = i + 1;
                continue;
            }
            else if (i + 2 < len && s[i + 1] == '-' && s[i + 2] == ')')
            {
                cout << i << "\n";
                i = i + 2;
                continue;
            }
        }
    }
}

int main()
{
    string s;
    cin >> s;
    int len;
    len = s.length();
    findSmiles(s, len);
}