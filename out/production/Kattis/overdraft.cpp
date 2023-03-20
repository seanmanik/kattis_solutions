#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = 0;
    int total = 0;
    while (n > 0)
    {
        int k;
        cin >> k;
        total += k;
        if (total < min)
        {
            min = total;
        }
        n--;
    }
    cout << min * -1;
}