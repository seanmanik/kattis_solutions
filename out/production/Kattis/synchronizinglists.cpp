#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        vector<int> list1(0);
        vector<int> list2(0);
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            list1.push_back(k);
        }
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            list2.push_back(k);
        }
        vector<int> origList1(list1);
        // vector<int> origList2(list2);
        sort(list1.begin(), list1.end());
        sort(list2.begin(), list2.end());
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            map[list1[i]] = list2[i];
        }
        for (int i = 0; i < n; i++)
        {
            int curr = origList1[i];
            cout << map[curr] << "\n";
        }
        cout << "\n";
    }
}