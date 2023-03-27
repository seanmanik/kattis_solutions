#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string s;
    unordered_map<string, float> count;
    unordered_set<string> encountered;
    vector<string> vec;
    float total = 0;
    while (getline(cin, s))
    {
        total++;
        if (encountered.find(s) == encountered.end())
        {
            vec.push_back(s);
            encountered.insert(s);
        }
        if (count.find(s) != count.end())
        {
            float curr = count[s] + 1;
            count.erase(s);
            count[s] = curr;
        }
        else
        {
            count[s] = 1;
        }
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " " << fixed << setprecision(4) << (count[vec[i]] / total * 100) << "\n";
    }
}