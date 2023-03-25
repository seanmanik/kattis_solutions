#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int curr = 1;
    while (n > 0)
    {
        int p, k, l;
        cin >> p >> k >> l;
        vector<int> vec;
        for (int i = 0; i < l; i++)
        {
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }
        sort(vec.begin(), vec.end());
        int numKeys = k;
        int counter = 1;
        int total = 0;
        for (int i = vec.size() - 1; i >= 0; i--)
        {
            int currFreq = vec[i];
            numKeys--;
            total += (currFreq * counter);
            if (numKeys == 0)
            {
                numKeys = k;
                counter++;
            }
        }
        cout << "Case #" << curr << ": " << total << "\n";
        curr++;
        n--;
    }
}