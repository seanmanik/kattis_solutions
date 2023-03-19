#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int, int> map;
    for (int i = 2; i <= n; i++)
    {
        int k;
        cin >> k;
        map[k] = i;
    }
    cout << 1 << " ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << map[i] << " ";
    }
}