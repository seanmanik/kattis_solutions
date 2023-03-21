#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc > 0)
    {
        int k;
        cin >> k;
        int high = 0;
        int low = 100;
        while (k > 0)
        {
            int curr;
            cin >> curr;
            if (curr < low)
            {
                low = curr;
            }
            if (curr > high)
            {
                high = curr;
            }
            k--;
        }
        cout << (high + high - low - low) << "\n";
        tc--;
    }
}