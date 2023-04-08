#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> vec;
    vector<string> vec2;
    while (n > 0)
    {
        string s;
        cin >> s;
        vec.push_back(s);
        vec2.push_back(s);
        n--;
    }
    sort(vec2.begin(), vec2.end());
    bool isIncreasing = true;
    for (int i = 0; i < vec2.size(); i++)
    {
        if (vec[i] != vec2[i])
        {
            isIncreasing = false;
            break;
        }
    }
    if (isIncreasing)
    {
        cout << "INCREASING";
        return 0;
    }
    vector<string> rev;
    for (int i = vec2.size() - 1; i >= 0; i--)
    {
        rev.push_back(vec2[i]);
    }
    bool isDecreasing = true;
    for (int i = 0; i < vec2.size(); i++)
    {
        if (vec[i] != rev[i])
        {
            isDecreasing = false;
            break;
        }
    }
    if (isDecreasing)
    {
        cout << "DECREASING";
        return 0;
    }
    cout << "NEITHER";
}