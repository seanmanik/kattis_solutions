#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int adrian = 0;
    int bruno = 0;
    int goran = 0;
    int adrianans[3] = {1, 2, 3};
    int brunoans[4] = {2, 1, 2, 3};
    int goranans[6] = {3, 3, 1, 1, 2, 2};
    for (int i = 0; i < n; i++)
    {
        char c = s[i] - 'A' + 1;
        if (adrianans[i % 3] == c)
        {
            adrian++;
        }
        if (brunoans[i % 4] == c)
        {
            bruno++;
        }
        if (goranans[i % 6] == c)
        {
            goran++;
        }
    }
    int high;
    high = max(max(adrian, bruno), goran);
    cout << high << "\n";
    if (adrian == high)
    {
        cout << "Adrian"
             << "\n";
    }
    if (bruno == high)
    {
        cout << "Bruno"
             << "\n";
    }
    if (goran == high)
    {
        cout << "Goran"
             << "\n";
    }
}