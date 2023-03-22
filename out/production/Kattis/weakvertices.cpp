#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            return 0;
        }
        vector<vector<int>> vec;
        unordered_set<int> strong;
        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            vec.push_back(v);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int k;
                cin >> k;
                vec[i].push_back(k);
            }
        }
        for (int i = 0; i < n; i++)
        {
            // check if vertice i is weak
            if (strong.find(i) != strong.end())
            {
                continue;
            }
            vector<int> currVertex = vec[i];
            bool isWeak = true;
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                {
                    continue;
                }
                if (currVertex[j] == 0)
                {
                    continue;
                }
                vector<int> secondVertex = vec[j];
                for (int k = 0; k < n; k++)
                {
                    if (k == i || k == j)
                    {
                        continue;
                    }
                    if (secondVertex[k] == 1)
                    {
                        vector<int> thirdVertex = vec[k];
                        if (thirdVertex[i] == 1)
                        {
                            isWeak = false;
                            strong.insert(i);
                            strong.insert(j);
                            strong.insert(k);
                            break;
                        }
                    }
                }
                if (!isWeak)
                {
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (strong.find(i) == strong.end())
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
}