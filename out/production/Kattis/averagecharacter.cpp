#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int total = 0;
    for (int i = 0; i < s.size(); i++)
    {
        total += s[i];
    }
    char c = total / s.size();
    cout << c;
}