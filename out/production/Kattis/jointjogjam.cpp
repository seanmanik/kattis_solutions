#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int toCompare = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    cin >> x1 >> y1 >> x2 >> y2;
    int totalSquared = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    if (totalSquared > toCompare)
    {
        cout << fixed << setprecision(6) << sqrt(totalSquared);
    }
    else
    {
        cout << fixed << setprecision(6) << sqrt(toCompare);
    }
}