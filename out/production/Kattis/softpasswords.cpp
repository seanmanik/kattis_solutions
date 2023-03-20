#include <iostream>

using namespace std;

bool prepend(string a, string b)
{
    // stored is a
    for (int i = 0; i < 10; i++)
    {
        char toAdd = i + '0';
        if (a == toAdd + b)
        {
            return true;
        }
    }
    return false;
}

bool append(string a, string b)
{
    for (int i = 0; i < 10; i++)
    {
        char toAdd = i + '0';
        if (a == b + toAdd)
        {
            return true;
        }
    }
    return false;
}

bool reverseCase(string a, string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        char curr = s[i];
        if (s[i] - 'A' >= 0 && s[i] - 'A' <= 25)
        {
            s[i] = s[i] - 'A' + 'a';
        }
        else if (s[i] - 'a' >= 0 && s[i] - 'a' <= 25)
        {
            s[i] = s[i] - 'a' + 'A';
        }
        else
        {
            continue;
        }
    }
    if (a == s)
    {
        return true;
    }
    return false;
}

int main()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "Yes";
    }
    else if (prepend(a, b))
    {
        cout << "Yes";
    }
    else if (append(a, b))
    {
        cout << "Yes";
    }
    else if (reverseCase(a, b))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}