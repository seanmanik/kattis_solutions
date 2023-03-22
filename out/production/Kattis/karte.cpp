#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_set<int> p, k, h, t;
    bool hasDups = false;
    int pNum, kNum, hNum, tNum;
    pNum = 13;
    kNum = 13;
    hNum = 13;
    tNum = 13;
    for (int i = 0; i < s.size(); i = i + 3)
    {
        char c = s[i];
        char tens, ones;
        tens = s[i + 1];
        ones = s[i + 2];
        int num = 10 * (tens - '0') + (ones - '0');
        if (c == 'P')
        {
            if (p.find(num) == p.end())
            {
                p.insert(num);
                pNum--;
            }
            else
            {
                hasDups = true;
            }
        }
        else if (c == 'K')
        {
            if (k.find(num) == k.end())
            {
                k.insert(num);
                kNum--;
            }
            else
            {
                hasDups = true;
            }
        }
        else if (c == 'H')
        {
            if (h.find(num) == h.end())
            {
                h.insert(num);
                hNum--;
            }
            else
            {
                hasDups = true;
            }
        }
        else if (c == 'T')
        {
            if (t.find(num) == t.end())
            {
                t.insert(num);
                tNum--;
            }
            else
            {
                hasDups = true;
            }
        }
    }
    if (hasDups)
    {
        cout << "GRESKA";
    }
    else
    {
        cout << pNum << " " << kNum << " " << hNum << " " << tNum;
    }
}