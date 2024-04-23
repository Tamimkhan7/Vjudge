#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
// #define mod 1000000007
// int findres(int n, int t, vector<pair<int, int>> &v)
// {
//     int mincost = INT_MAX;

//     for (auto [x, y] : v)
//     {
//         if (y <= t)
//             mincost = min(mincost, x);
//     }
//     if (mincost == INT_MAX)
//         return -1;
//     else
//         return mincost;
// }
int32_t main()
{
    MTK;
    int n, t;
    cin >> n >> t;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i] = make_pair(a, b);
    }

    int mincost = INT_MAX;
    for (auto [x, y] : v)
    {
        if (y <= t)
            mincost = min(mincost, x);
    }
    if (mincost == INT_MAX)
        cout << "TLE" << '\n';
    else
        cout << mincost << '\n';

    return 0;
}