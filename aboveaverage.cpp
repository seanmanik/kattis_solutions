#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc > 0)
    {
        int n;
        cin >> n;
        vector<int> vec;
        float total = 0;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vec.push_back(k);
            total += k;
        }
        float avg = total / (float)n;
        float aboveAvg = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] > avg)
            {
                aboveAvg += 1;
            }
        }
        aboveAvg = aboveAvg / (float)n * 100;
        cout << fixed << setprecision(3) << aboveAvg << "%\n";
        tc--;
    }
}