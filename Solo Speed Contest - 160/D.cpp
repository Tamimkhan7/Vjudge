#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    char a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '#')
                cnt++;
        }
    }
    cout << cnt << '\n';
    int i = 1, j = 1;
    while (true)
    {
        if (a[i][j + 1] == '#' and j < m)
        {
            cnt--;
            j++;
        }
        else if (a[i + 1][j] == '#' and i < n)
        {
            cnt--;
            i++;
        }
        else
            break;
    }
    cout << cnt << '\n';
    if (i == n and j == m and cnt == 1)
        cout << "Possible" << '\n';
    else
        cout << "Impossible" << '\n';
    return 0;
}