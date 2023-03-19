#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    while (n > 0)
    {
        int k;
        cin >> k;
        total += k;
        n--;
    }
    if (total % 3 == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}