#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
int a[N], pref[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i - 1] ^ a[i];
        mp[pref[i]]++;
    }
    for (auto [x, y] : mp)
        cout << x << ' ' << y << '\n';
    if (mp[0] > 0)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}