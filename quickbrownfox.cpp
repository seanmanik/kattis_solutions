#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    string t;
    getline(cin, t);
    while (tc > 0)
    {
        int arr[26];
        for (int i = 0; i < 26; i++)
        {
            arr[i] = 0;
        }
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];
            if (c >= 'a' && c <= 'z')
            {
                c -= 'a';
                arr[c] = 1;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                c -= 'A';
                arr[c] = 1;
            }
            else
            {
                continue;
            }
        }
        bool isPangram = true;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
            {
                isPangram = false;
                break;
            }
        }
        if (isPangram)
        {
            cout << "pangram\n";
        }
        else
        {
            cout << "missing ";
            for (int i = 0; i < 26; i++)
            {
                if (arr[i] == 0)
                {
                    char x = 'a' + i;
                    cout << x;
                }
            }
            cout << "\n";
        }
        tc--;
    }
}