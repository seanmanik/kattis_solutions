#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    float max = (float)a * b;
    b--;
    while (true)
    {
        if (max / a <= b)
        {
            max++;
            cout << max;
            return 0;
        }
        max--;
    }
}