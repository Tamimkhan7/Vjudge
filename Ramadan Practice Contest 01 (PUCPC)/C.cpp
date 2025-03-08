#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        vector<bool> vis(n + 1, false);

        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                for (int j = i; j <= n; j *= 2)
                {
                    v.push_back(j);
                    vis[j] = true;
                }
            }
        }

        cout << 2 << '\n';
        for (int x : v)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
