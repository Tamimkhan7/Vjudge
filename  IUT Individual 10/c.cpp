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

int32_t main()
{
    MTK;
    ll n;
    cin >> n;
    vector<char> v;
    while (n != 0)
    {
        n--;
        v.push_back(n % 26 + 'a');
        n /= 26;
    }
    reverse(all(v));
    for (auto x : v)
        cout << x;
    cout << '\n';

    return 0;
}