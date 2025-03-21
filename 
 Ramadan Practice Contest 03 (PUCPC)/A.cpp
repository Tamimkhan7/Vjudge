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
    int n;
    string s;
    cin >> n >> s;
    int res = 0;
    string ans = "";
    for (int i = 0; i < n; i += 2)
    {
        if ((s[i] == 'a' and s[i + 1] == 'b') || (s[i] == 'b' and s[i + 1] == 'a'))
            ans += s[i], ans += s[i + 1];
        else
        {
            ans += 'a', ans += 'b';
            res++;
        }
    }


    // }
    cout << res << '\n';
    cout << ans << '\n';

    return 0;
}