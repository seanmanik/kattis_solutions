#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc > 0)
    {
        double v, deg, x, h1, h2;
        cin >> v >> deg >> x >> h1 >> h2;
        double rad = deg / 180 * M_PI;
        double time = x / (v * cos(rad));
        double ypos = v * time * sin(rad) - 0.5 * 9.81 * time * time;
        if (ypos >= h1 + 1 && ypos <= h2 - 1)
        {
            cout << "Safe\n";
        }
        else
        {
            cout << "Not Safe\n";
        }
        tc--;
    }
}