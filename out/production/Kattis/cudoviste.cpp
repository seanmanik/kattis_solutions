#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> vect(r, vector<int>(c, 0));
    for (int i = 0; i < r; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < c; j++)
        {
            vect[i][j] = s[j];
        }
    }
    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    for (int i = 0; i < r - 1; i++)
    {
        for (int j = 0; j < c - 1; j++)
        {
            int curr = 0;
            if (vect[i][j] == '#' || vect[i + 1][j] == '#' || vect[i][j + 1] == '#' || vect[i + 1][j + 1] == '#')
            {
                continue;
            }
            // valid parking
            if (vect[i][j] == 'X')
            {
                curr++;
            }
            if (vect[i + 1][j] == 'X')
            {
                curr++;
            }
            if (vect[i][j + 1] == 'X')
            {
                curr++;
            }
            if (vect[i + 1][j + 1] == 'X')
            {
                curr++;
            }
            if (curr == 0)
            {
                zero++;
            }
            else if (curr == 1)
            {
                one++;
            }
            else if (curr == 2)
            {
                two++;
            }
            else if (curr == 3)
            {
                three++;
            }
            else if (curr == 4)
            {
                four++;
            }
        }
    }
    cout << zero << "\n"
         << one << "\n"
         << two << "\n"
         << three << "\n"
         << four;
}