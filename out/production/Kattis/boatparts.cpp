#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int parts, days;
    cin >> parts >> days;
    unordered_set<string> set;
    int total = 0;
    int day = 0;
    for (int i = 0; i < days; i++)
    {
        string s;
        cin >> s;
        if (set.find(s) == set.end())
        {
            set.insert(s);
            total++;
        }
        if (total == parts && day == 0)
        {
            day = i + 1;
        }
    }
    if (total != parts)
    {
        cout << "paradox avoided";
    }
    else
    {
        cout << day;
    }
}