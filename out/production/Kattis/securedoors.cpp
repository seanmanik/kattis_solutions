#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_set<string> set;
    while (n > 0)
    {
        string action, name;
        cin >> action >> name;
        if (action == "entry")
        {
            if (set.find(name) == set.end())
            {
                set.insert(name);
                cout << name << " entered\n";
            }
            else
            {
                cout << name << " entered (ANOMALY)\n";
            }
        }
        else if (action == "exit")
        {
            if (set.find(name) == set.end())
            {
                cout << name << " exited (ANOMALY)\n";
            }
            else
            {
                set.erase(name);
                cout << name << " exited\n";
            }
        }
        n--;
    }
}