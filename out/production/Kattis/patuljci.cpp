#include <iostream>

using namespace std;

int main()
{
    int arr[9];
    int total = 0;
    for (int i = 0; i < 9; i++)
    {
        int k;
        cin >> k;
        arr[i] = k;
        total += k;
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (total - arr[i] - arr[j] == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (k != i && k != j)
                    {
                        cout << arr[k] << "\n";
                    }
                }
            }
        }
    }
}