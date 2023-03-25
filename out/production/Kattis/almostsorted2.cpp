#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vec.push_back(k);
    }
    int start = -1;
    int end = -1;
    for (int i = 1; i < n; i++)
    {
        if (vec[i] < vec[i - 1])
        {
            if (start == -1)
            {
                start = i - 1;
            }
            end = i;
        }
    }
    sort(vec.begin() + start, vec.begin() + end + 1);
    for (int i = 1; i < n; i++)
    {

        if (vec[i] < vec[i - 1])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
