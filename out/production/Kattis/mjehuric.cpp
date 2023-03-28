#include <iostream>

using namespace std;

bool isSorted(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != i + 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    while (!isSorted(arr))
    {
        for (int i = 0; i < 4; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                for (int j = 0; j < 5; j++)
                {
                    cout << arr[j] << " ";
                }
                cout << "\n";
            }
        }
    }
}