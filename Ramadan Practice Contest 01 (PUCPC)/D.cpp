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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (v.empty() and x == 0)
                continue;
            else
            {
                v.push_back(x);
            }
        }
        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
        // while (!v.empty() and v[0] == 0)
        //     v.erase(v.begin());
        while (!v.empty() and v.back() == 0)
            v.pop_back();
        int zero_cnt = 0;
        sort(all(v));
        if (!v.empty() and v[0] == 0)
            zero_cnt = 1;
        //  show(zero_cnt);
        if (v.empty())
            cout << 0 << '\n';
        else if (zero_cnt > 0)
            cout << 2 << '\n';
        else
            cout << 1 << '\n';
    }
    return 0;
}