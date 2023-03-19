#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int a = 1;
    int b = 0;
    while (k > 0)
    {
        int tempB = a;
        tempB += b;
        a = b;
        b = tempB;
        k--;
    }
    cout << a << " " << b;
}