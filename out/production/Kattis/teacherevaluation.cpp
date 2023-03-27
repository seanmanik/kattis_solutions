#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float N, P;
    cin >> N >> P;
    float total = 0;
    for (int i = 0; i < N; i++)
    {
        float k;
        cin >> k;
        total += k;
    }
    float num = (P * N - total) / (100 - P);
    cout << ceil(num);
}