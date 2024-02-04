#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string s = b, ss = a;

        map<char, int> mp;
        for (auto i : b)
            mp[i]++;
        int n = a.size(), m = b.size();
        int cnt = 0, mx = -1;
        for (auto x : a)
        {
            if (mp[x])
            {
                cnt++;
                mp[x]--;
            }
            else
                break;
        }

        cout << cnt << '\n';
    }
}