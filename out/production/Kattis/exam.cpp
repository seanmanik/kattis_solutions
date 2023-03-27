#include <iostream>
#include <string>

using namespace std;

int main()
{
    int correct;
    cin >> correct;
    string a, b;
    getline(cin, a);
    getline(cin, a);
    getline(cin, b);
    int same = 0;
    int total = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            same++;
        }
    }
    if (same > correct)
    {
        total += correct;
        total += (a.size() - same);
        cout << total;
    }
    else
    {
        total += same;
        total += (a.size() - correct);
        cout << total;
    }
}