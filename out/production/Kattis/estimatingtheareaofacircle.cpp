#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{

    while (true)
    {
        double r, m, c;
        cin >> r >> m >> c;
        if (r == 0 && m == 0 && c == 0)
        {
            return 0;
        }
        double actualCircleArea = r * r * M_PI;
        double squareArea = r * r * 4;
        double estArea = (c / m) * squareArea;
        cout << fixed << setprecision(5) << actualCircleArea << " " << estArea << "\n";
    }
}