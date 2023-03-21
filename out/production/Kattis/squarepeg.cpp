#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    a = a * a * 2;
    b = (b * 2) * (b * 2);
    if (a <= b)
    {
        cout << "fits";
    }
    else
    {
        cout << "nope";
    }
}