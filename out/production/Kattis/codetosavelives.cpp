#include <iostream>
#include <string>
#include <vector>

using namespace std;

int process(string s)
{
    int len = s.size();
    int multiplier = 1;
    int total = 0;
    for (int i = len - 1; i >= 0; i = i - 2)
    {
        total += (multiplier * (s[i] - '0'));
        multiplier *= 10;
    }
    return total;
}

void deprocess(int n)
{
    vector<int> vec;
    while (n > 0)
    {
        int k = n % 10;
        vec.push_back(k);
        n /= 10;
    }
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int tc;
    cin >> tc;
    string s;
    getline(cin, s);
    while (tc > 0)
    {
        string line;
        getline(cin, line);
        int curr = process(line);
        getline(cin, line);
        int next = process(line);
        deprocess(next + curr);
        tc--;
    }
}