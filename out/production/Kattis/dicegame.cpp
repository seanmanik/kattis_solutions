#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    int e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    int sum1, sum2;
    sum1 = a + b + c + d;
    sum2 = e + f + g + h;
    if (sum1 > sum2)
    {
        cout << "Gunnar";
    }
    else if (sum1 < sum2)
    {
        cout << "Emma";
    }
    else
    {
        cout << "Tie";
    }
}