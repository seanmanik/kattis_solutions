#include <iostream>
#include <unordered_map>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    unordered_map<char, string> map;
    map['a'] = "@";
    map['b'] = "8";
    map['c'] = "(";
    map['d'] = "|)";
    map['e'] = "3";
    map['f'] = "#";
    map['g'] = "6";
    map['h'] = "[-]";
    map['i'] = "|";
    map['j'] = "_|";
    map['k'] = "|<";
    map['l'] = "1";
    map['m'] = "[]\\/[]";
    map['n'] = "[]\\[]";
    map['o'] = "0";
    map['p'] = "|D";
    map['q'] = "(,)";
    map['r'] = "|Z";
    map['s'] = "$";
    map['t'] = "']['";
    map['u'] = "|_|";
    map['v'] = "\\/";
    map['w'] = "\\/\\/";
    map['x'] = "}{";
    map['y'] = "`/";
    map['z'] = "2";
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        char curr = s[i];
        if (!(curr >= 'A' && curr <= 'Z' || curr >= 'a' && curr <= 'z'))
        {
            cout << curr;
        }
        else
        {
            char c = tolower(curr);
            cout << map[c];
        }
    }
}