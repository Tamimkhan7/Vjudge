#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int32_t main()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            ll x = a[i - 1] - a[i];
            swap(a[i], a[i - 1]);
            ans += x;
        }
    }
    cout << ans << '\n';
}