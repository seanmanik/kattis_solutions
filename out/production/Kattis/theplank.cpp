#include <iostream>

using namespace std;

int ways(int k, int arr[])
{
    if (k <= 0)
    {
        return 0;
    }
    else if (k == 1)
    {
        return 1;
    }
    else if (k == 2)
    {
        return 2;
    }
    else if (k == 3)
    {
        return 4;
    }
    if (arr[k] != 0)
    {
        return arr[k];
    }
    int one = ways(k - 1, arr);
    int two = ways(k - 2, arr);
    int three = ways(k - 3, arr);
    arr[k] = one + two + three;
    return one + two + three;
}

int main()
{
    int k;
    cin >> k;
    int arr[24] = {0};
    int ans = ways(k, arr);
    cout << ans;
}
