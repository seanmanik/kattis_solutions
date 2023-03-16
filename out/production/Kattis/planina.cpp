#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int curr = 3;
    int multiplier = 1;
    while (n > 1)
    {
        multiplier *= 2;
        curr += multiplier;
        n--;
    }
    cout << (curr * curr);
}