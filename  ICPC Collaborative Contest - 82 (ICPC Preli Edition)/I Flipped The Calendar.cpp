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
bool leap(int n)
{
    if ((n % 400 == 0) or (n % 100 != 0 and n % 4 == 0))
        return true;
    return false;
}
int res[50000];
void solve()
{
    int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cur_day = 3;
    for (int i = 1970; i <= 2037; i++)
    {
        (leap(i) == true ? m[1] = 29 : m[1] = 28);
        int total_week = 0;
        for (int j = 0; j < 12; j++)
        {
            int total_days = m[j] + cur_day;
            int cur_week = (total_days / 7) + (total_days % 7 != 0);
            cur_day = total_days % 7;
            total_week += (cur_week);
        }
        res[i] = total_week;
    }
}
int32_t main()
{
    MTK;
    solve();
    int n;
    cin >> n;
    cout << res[n] << '\n';
    return 0;
}