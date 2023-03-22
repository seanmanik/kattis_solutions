#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float k;
    cin >> k;
    float multiplier = 5280.0;
    multiplier = multiplier * 1000.0 / 4854.0;
    k *= multiplier;
    int output = k + 0.5;
    cout << output;
}