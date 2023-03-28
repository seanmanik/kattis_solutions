#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int dogOneTotal = a + b;
    int dogTwoTotal = c + d;
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        int bite = 0;
        int rem = arr[i] % dogOneTotal;
        if (rem <= a && rem != 0)
        {
            bite++;
        }
        rem = arr[i] % dogTwoTotal;
        if (rem <= c && rem != 0)
        {
            bite++;
        }
        if (bite == 0)
        {
            cout << "none\n";
        }
        else if (bite == 1)
        {
            cout << "one\n";
        }
        else if (bite == 2)
        {
            cout << "both\n";
        }
    }
}