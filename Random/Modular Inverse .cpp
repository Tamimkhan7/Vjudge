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

int inverse(int x, int mod)
{
    return power(x, mod - 2, mod);
}

bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int x, m;
        cin >> x >> m;
        if (is_prime(m))
        {
            cout << inverse(x, m) << '\n';
        }
        else
            cout << "Not Exist\n";
    }
    return 0;
}