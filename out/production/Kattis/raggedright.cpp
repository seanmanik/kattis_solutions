#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s;
    vector<string> vec;
    int high = 0;
    while (getline(cin, s))
    {
        if (s.size() > high)
        {
            high = s.size();
        }
        vec.push_back(s);
    }
    int total = 0;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int diff = high - vec[i].size();
        total += (diff * diff);
    }
    cout << total;
}