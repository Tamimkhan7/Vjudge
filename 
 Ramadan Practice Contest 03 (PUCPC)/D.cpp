#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define int int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n, l, r;
    cin >> n >> l >> r;
    int mn_sum = 0, mx_sum = 0;
    int x = n - l;
    int val = 1;
    for (int i = 0; i < l; i++)
    {
        mn_sum += val;
        val *= 2;
    }
    for (int i = 0; i < x; i++)
        mn_sum += 1;

    val = 1;
    for (int i = 0; i < r; i++)
    {
        mx_sum += val;
        val *= 2;
    }
    val /= 2;
    x = n - r;
    for (int i = 0; i < x; i++)
        mx_sum += val;

    cout << mn_sum << ' ' << mx_sum << '\n';
    return 0;
}