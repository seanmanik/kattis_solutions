#include <iostream>
#include <vector>

using namespace std;

int findMedian(int a, int b, int c)
{
    if (a >= b && a <= c || a >= c && a <= b)
    {
        return a;
    }
    else if (b >= a && b <= c || b >= c && b <= a)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> one, two, three;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k;
            cin >> k;
            if (i == 0)
            {
                one.push_back(k);
            }
            else if (i == 1)
            {
                two.push_back(k);
            }
            else
            {
                three.push_back(k);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int a = one[i];
        int b = two[i];
        int c = three[i];
        int toRun = findMedian(a, b, c);
        cout << toRun << " ";
    }
}