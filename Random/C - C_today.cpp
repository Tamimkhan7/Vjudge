#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) x.begin(), x.end()
int32_t main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        sort(all(s));
        int cnt = 0;
        ll n = s.size();
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '4' || s[i] == '7')
                cnt++;
        }
        cout << n - cnt << '\n';
    }
}