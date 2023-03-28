#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int total = b + c;
    if ((total / a) % 2 == 1)
    {
        cout << "opponent";
    }
    else
    {
        cout << "paul";
    }
}