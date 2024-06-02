#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int main()
{
    MTK;
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    int b[m + 1];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    int l;
    cin >> l;
    int c[l + 1];
    for (int i = 1; i <= l; i++)
        cin >> c[i];
    int q;
    cin >> q;
    int x[q + 1];
    for (int i = 1; i <= q; i++)
        cin >> x[i];
    set<ll> se;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= l; k++)
            {
                ll ans = (1LL*a[i] + b[j] + c[k]);
                se.insert(ans);
            }
        }
    }
    for (int i = 1; i <= q; i++)
    {
        if (se.find(x[i]) != se.end())
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}
