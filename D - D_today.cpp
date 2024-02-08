#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int32_t main()
{
    int n;
    cin >> n;
    ll sm = 0;
    set<ll> ans;
    for (ll i = 1;; i++)
    {
        sm += i;
        if (sm <= n)
            ans.insert(i);
        else
        {
            ll c = sm - n;
            ans.insert(i);
            ans.erase(c);
            break;
        }
    }
    for (auto x : ans)
        cout << x << '\n';
}