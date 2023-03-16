#include <iostream>
using namespace std;

int main()
{
    int h, min;
    cin >> h >> min;
    if (min >= 45)
    {
        min = min - 45;
        cout << h << " " << min;
    }
    else
    {
        h--;
        if (h == -1)
        {
            h = 23;
        }
        int rem = min + 60 - 45;
        cout << h << " " << rem;
    }
}