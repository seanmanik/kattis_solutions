#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    cin >> a;
    double side = sqrt(a);
    cout << fixed << setprecision(6) << (side * 4);
}