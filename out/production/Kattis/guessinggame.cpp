#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int curr;
        cin >> curr;
        if (curr == 0)
        {
            return 0;
        }
        int high = 100;
        int low = 0;
        int correct;
        while (true)
        {
            string s;
            string ignore;
            cin >> ignore >> s;
            if (s == "high")
            {

                if (high > curr)
                {
                    high = curr;
                }
                cin >> curr;
            }
            else if (s == "low")
            {
                if (low < curr)
                {
                    low = curr;
                }
                cin >> curr;
            }
            else if (s == "on")
            {
                correct = curr;
                break;
            }
        }
        if (correct < high && correct > low)
        {
            cout << "Stan may be honest\n";
        }
        else
        {
            cout << "Stan is dishonest\n";
        }
    }
}