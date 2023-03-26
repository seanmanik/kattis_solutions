#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 1;
    while (n > 0)
    {
        vector<string> vec;
        int a, b;
        cin >> a >> b;
        string s;
        getline(cin, s);
        for (int i = 0; i < a; i++)
        {
            getline(cin, s);
            vec.push_back(s);
        }
        cout << "Test " << counter << "\n";
        for (int i = a - 1; i >= 0; i--)
        {
            string curr = vec[i];
            for (int j = b - 1; j >= 0; j--)
            {
                cout << curr[j];
            }
            cout << "\n";
        }
        counter++;
        n--;
    }
}