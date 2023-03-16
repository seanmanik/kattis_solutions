#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 7;
    while (n > 0)
    {
        string first, second;
        cin >> first >> second;
        if (second == "op!")
        {
            if (k < 10)
            {
                k++;
            }
        }
        else if (second == "ned!")
        {
            if (k > 0)
            {
                k--;
            }
        }
        n--;
    }
    cout << k;
}