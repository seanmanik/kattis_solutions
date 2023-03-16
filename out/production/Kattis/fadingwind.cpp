#include <iostream>
using namespace std;

int main()
{
    int h, k, v, s;
    cin >> h >> k >> v >> s;
    int dist = 0;
    while (h > 0)
    {
        v += s;
        v -= max(1, v / 10);
        if (v >= k)
        {
            h += 1;
        }
        if (v > 0 && v < k)
        {
            h--;
            if (h == 0)
            {
                v = 0;
            }
        }
        if (v <= 0)
        {
            h = 0;
            v = 0;
        }
        dist += v;
        if (s > 0)
        {
            s--;
        }
    }
    cout << dist;
}