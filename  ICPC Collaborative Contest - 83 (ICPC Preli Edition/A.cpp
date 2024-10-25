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
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    int div = a - b;
    ll mul = 1LL * a * b;
    cout << max(1LL * sum, max(1LL * div, mul)) << '\n';
    return 0;
}