#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int counter = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n *= 3;
            n += 1;
        }
        counter++;
    }
    cout << counter;
}