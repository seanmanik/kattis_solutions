#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double ans;
    double total = a * a;
    double internal = (a - b) * (a - b);
    ans = (internal / total);
    cout << fixed << setprecision(6) << ans * 100;
}