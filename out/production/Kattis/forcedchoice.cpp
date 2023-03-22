#include <iostream>

using namespace std;

int main()
{
    int n, p, s;
    cin >> n >> p >> s;
    while (s > 0)
    {
        int k;
        cin >> k;
        bool have = false;
        while (k > 0)
        {
            int curr;
            cin >> curr;
            if (curr == p)
            {
                have = true;
            }
            k--;
        }
        if (have)
        {
            cout << "KEEP\n";
        }
        else
        {
            cout << "REMOVE\n";
        }
        s--;
    }
}