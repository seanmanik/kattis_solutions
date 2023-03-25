#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double prevV, prevT;
    cin >> prevV >> prevT;
    double total = 0;
    for (int i = 1; i < n; i++)
    {
        double currV, currT;
        cin >> currV >> currT;
        double currArea = ((prevT + currT) / 2 * (currV - prevV));
        if (currArea < 0)
        {
            currArea *= -1;
        }
        total += currArea;
        prevV = currV;
        prevT = currT;
    }
    cout << fixed << setprecision(6) << (total / 1000);
}