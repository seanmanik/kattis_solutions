#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    while (n > 0)
    {
        int k;
        cin >> k;
        vec.push_back(k);
        n--;
    }
    sort(vec.begin(), vec.end());
    int latest = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        int day = i + 1;
        int curr = vec[vec.size() - 1 - i];
        if (day + curr + 1 > latest)
        {
            latest = day + curr + 1;
        }
    }
    cout << latest;
}