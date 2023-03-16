#include <iostream>

using namespace std;

int main()
{
    int w, n;
    cin >> w >> n;
    int area = 0;
    while (n > 0)
    {
        int a, b;
        cin >> a >> b;
        area += (a * b);
        n--;
    }
    cout << (area / w);
}