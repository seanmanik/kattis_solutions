#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int r, n;
    cin >> r >> n;
    if (n >= r)
    {
        int k;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
        }
        cout << "too late";
    }
    else
    {
        unordered_set<int> set;
        int k;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            set.insert(k);
        }
        for (int i = 1; i <= r; i++)
        {
            if (set.find(i) == set.end())
            {
                cout << i;
                break;
            }
            else
            {
                continue;
            }
        }
    }
}