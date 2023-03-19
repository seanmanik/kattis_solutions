#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sun = -1 * a + b;
    int moon = -1 * c + d;
    while (sun != moon)
    {
        if (sun < moon)
        {
            sun += b;
        }
        else
        {
            moon += d;
        }
    }
    cout << moon;
}
