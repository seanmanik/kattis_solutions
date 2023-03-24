#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(), vec.end());
    int counter = 0;
    if (vec.size() == 1)
    {
        if (vec[0] <= x)
        {
            cout << 1;
            return 0;
        }
    }
    for (int i = 1; i < n; i++)
    {
        counter = i;
        if (vec[i] + vec[i - 1] > x)
        {
            break;
        }
        if (i == n - 1)
        {
            counter++;
        }
    }
    cout << counter;
}