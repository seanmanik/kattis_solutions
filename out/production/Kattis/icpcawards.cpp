#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    unordered_set<string> set;
    while (n > 0)
    {
        if (counter == 12)
        {
            return 0;
        }
        string school, team;
        cin >> school >> team;
        if (set.find(school) != set.end())
        {
            n--;
            continue;
        }
        else
        {

            set.insert(school);
            cout << school << " " << team << "\n";
            counter++;
        }

        n--;
    }
}