#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double pi = M_PI;
    double n;
    cin >> n;

    cout << fixed << setprecision(6) << (pi * n * n) << "\n"
         << fixed << setprecision(6) << (n * n * 2);
}