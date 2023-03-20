#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << b << "\n";
    for (int i = 0; i < b; i++)
    {
        string s;
        cin >> s;
        cout << s << "\n";
    }
    a--;
    for (int i = 0; i < a; i++)
    {
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            string s;
            cin >> s;
        }
    }
}