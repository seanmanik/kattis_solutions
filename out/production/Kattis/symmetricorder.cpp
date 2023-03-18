#include <iostream>

using namespace std;

int main()
{
    string arr[15] = {""};
    int n;
    int counter = 1;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "SET " << counter << "\n";
        for (int i = 0; i < n; i = i + 2)
        {
            cout << arr[i] << "\n";
        }
        for (int i = n - 1; i >= 0; i = i - 2)
        {
            if (i == n - 1 && i % 2 == 0)
            {
                i++;
                continue;
            }
            cout << arr[i] << "\n";
        }
        counter++;
    }
    return 0;
}