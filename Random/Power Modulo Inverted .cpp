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

int power(int x, int n, int mod)
{
    int ans = 1 % mod;
    while (n > 0)
    {
        if (n & 1)
            ans = 1LL * ans * x % mod;

        x = 1LL * x * x % mod;
        n >>= 1;
    }
    return ans;
}

int32_t main()
{
    MTK;

    int x, z, k;
    while (cin >> x >> z >> k)
    {
        if (x == 0 and z == 0 and k == 0)
            return 0;
        int left = k % z;
        show(left);
        int l = 1, r = 1000, ans = -1;
        while (l <= r)
        {
            int mid = (1LL * l + r) / 2;
            cout << mid << '\n';
            int val = power(x, mid, z);
            cout << val << '\n';
            if (val == left)
            {
                ans = mid;
                break;
            }
            else if (val > left)
                r = mid - 1;
            else
                l = mid + 1;
        }

        // for (int i = 1; i <= 1e4; i++)
        // {
        //     int val = power(x, i, z) % z;
        //     if (val == left)
        //     {
        //         ans = i;
        //         break;
        //     }
        // }

        if (ans != -1)
            cout << ans << '\n';
        else
            cout << "No Solution\n";
    }
    return 0;
}