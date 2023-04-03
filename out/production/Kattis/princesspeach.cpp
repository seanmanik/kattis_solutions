#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, y;
    cin >> n >> y;
    vector<int> vec;
    for (int i = 0; i < y; i++)
    {
        int k;
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(), vec.end());
    int counter = 0;
    int pointer = 0;
    for (int i = 0; i < n; i++)
    {
        if (pointer < vec.size() && vec[pointer] == i)
        {
            counter++;
            while (pointer < vec.size() && vec[pointer] == i)
            {
                pointer++;
            }
        }
        else
        {
            cout << i << "\n";
        }
    }
    cout << "Mario got " << counter << " of the dangerous obstacles.";
}