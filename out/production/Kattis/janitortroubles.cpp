#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double s = (a + b + c + d) / 2;
    double ans = sqrt((s - a) * (s - b) * (s - c) * (s - d));
    cout << fixed << setprecision(6) << ans;
}