#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int counter = 0;
    bool done = false;
    for (int i = 0; i < a; i++)
    {
        int curr;
        cin >> curr;
        if (!done && curr <= b)
        {
            b -= curr;
            counter++;
        }
        else
        {
            done = true;
        }
    }
    cout << counter;
}