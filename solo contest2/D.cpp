#include <bits/stdc++.h>
using namespace std;

int minStacksNeeded(vector<int> &permutation)
{
    int n = permutation.size();
    vector<int> topValue;
    for (int i = 0; i < n; ++i)
    {
        int current = permutation[i];
        auto it = lower_bound(topValue.begin(), topValue.end(), current);
        if (it == topValue.end())
        {
            topValue.push_back(current);
        }
        else
        {
            *it = current;
        }
    }
    return topValue.size();
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> permutation(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> permutation[i];
        }
        int m = minStacksNeeded(permutation);
        cout << m << endl;
    }
    return 0;
}
