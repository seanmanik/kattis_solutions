#include <iostream>

using namespace std;

int main()
{
    float n, k, p;
    cin >> n >> k >> p;
    float e = n * p;
    if (e < k)
    {
        cout << "spela";
    }
    else
    {
        cout << "spela inte!"
    }
}