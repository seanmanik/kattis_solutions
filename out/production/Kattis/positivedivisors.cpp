#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    long long k;
    cin >> k;
    vector<long long> vec;
    for (long long i = 1; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            long long quotient = k / i;
            if (quotient != i)
            {
                vec.push_back(quotient);
            }
            cout << i << "\n";
        }
    }
    for (long long i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i] << "\n";
    }
}