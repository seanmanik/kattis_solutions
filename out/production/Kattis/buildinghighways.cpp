#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(), vec.end());
    long long start = vec[0];
    long long total = 0;
    for (int i = 1; i < vec.size(); i++)
    {
        total = total + start + (long long)vec[i];
    }
    cout << total;
}