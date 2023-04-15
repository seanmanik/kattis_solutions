#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, d, e;
    while (true)
    {
        cin >> a;
        if (a == 0)
        {
            break;
        }
        cin >> b >> c >> d >> e;
        double first = a - c;
        if (first < 0)
        {
            first *= -1;
        }
        double second = b - d;
        if (second < 0)
        {
            second *= -1;
        }
        first = pow(first, e);
        second = pow(second, e);
        double newPow = 1 / e;
        cout << fixed << setprecision(4) << (pow(first + second, newPow)) << "\n";
    }
}