#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    while (n > 1)
    {
        int curr;
        cin >> curr;
        if (m % curr == 0)
        {
            cout << m / curr << "/1\n";
        }
        else
        {
            int begin = 2;
            while (begin <= m)
            {
                if (m % begin == 0 && curr % begin == 0)
                {
                    break;
                }
                begin++;
            }
            if (m >= curr)
            {
                int temp = m * begin;
                temp /= curr;
                cout << temp << "/" << begin << "\n";
            }
            else
            {
                int begin = 2;
                int temp = curr * begin;
                temp /= m;
                cout << begin << "/" << temp << "\n";
            }
        }
        n--;
    }
}