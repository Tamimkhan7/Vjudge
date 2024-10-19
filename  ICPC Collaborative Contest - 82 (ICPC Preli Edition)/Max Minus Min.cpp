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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        int mid = v.size() / 2;
        int mx = v[v.size() - 1];
        int x;
        if (n % 2)
            x = v[mid];
        else
            x = v[mid - 1];
        int p = v[0];
        for (int i = 0; i < mid; i++)
        {
            if (mx == v[i])
                break;
            v[i] += x;
        }
        for (auto x : v)
            cout << x << ' ';
        cout << '\n';
        sort(all(v));
        cout << mx - v[0] << '\n';
    }
    return 0;
}