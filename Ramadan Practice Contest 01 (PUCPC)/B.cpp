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
        vector<int> v(n), ans, duplicate;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v));
        ans.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            if (find(all(ans), v[i]) != ans.end())
            {
                duplicate.push_back(v[i]);
                continue;
            }
            else
                ans.push_back(v[i]);
        }
        for (auto x : duplicate)
            ans.push_back(x);
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    return 0;
}