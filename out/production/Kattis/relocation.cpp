#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n, req;
    cin >> n >> req;
    unordered_map<int, int> map;
    for (int i = 1; i <= n; i++)
    {
        int loc;
        cin >> loc;
        map[i] = loc;
    }
    for (int i = 0; i < req; i++)
    {
        int r;
        cin >> r;
        if (r == 1)
        {
            int c, x;
            cin >> c >> x;
            map.erase(c);
            map[c] = x;
        }
        else
        {
            int a, b;
            cin >> a >> b;
            int locA, locB;
            locA = map[a];
            locB = map[b];
            int dist = abs(locA - locB);
            cout << dist << "\n";
        }
    }
}