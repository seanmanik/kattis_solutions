#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int b;
        float p;
        cin >> b >> p;
        cout << (b - 1) * (60 / p) << " " << b * (60 / p) << " " << (b + 1) * (60 / p) << "\n";
        n--;
    }
}