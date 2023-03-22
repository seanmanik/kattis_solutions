#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    while (n > 0)
    {
        string s;
        cin >> s;
        char prev = s[0];
        bool won = true;
        for (int i = 1; i < s.size(); i++)
        {
            if (prev == 'C' && s[i] == 'D')
            {
                won = false;
            }
            else
            {
                prev = s[i];
            }
        }
        if (won)
        {
            total++;
        }
        n--;
    }
    cout << total;
}