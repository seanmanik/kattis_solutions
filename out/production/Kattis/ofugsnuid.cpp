#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr.push_back(k);
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i] << "\n";
    }
}