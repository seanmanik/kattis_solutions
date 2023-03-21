#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int total = 0;
    total += (2 * a + b);
    if (total % 2 == 0)
    {
        cout << "possible";
    }
    else
    {
        cout << "impossible";
    }
}