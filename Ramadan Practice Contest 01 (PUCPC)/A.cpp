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
        int a[2][2];
        int sum = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
                sum += a[i][j];
            }
        }
        if (sum == 0)
            cout << 0 << '\n';
        else if (sum == 3 || sum == 2 || sum == 1)
            cout << 1 << '\n';
        else if (sum == 4)
            cout << 2 << '\n';
    }
    return 0;
}