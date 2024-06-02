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
const int N = 2e5;
int a[N], pre[N];
int32_t main()
{
    MTK;
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] >= 'a' and s[i] <= 'z')
                continue;
            else
            {
                flag = true;
                break;
            }
        }
        else if (i % 2 != 0)
        {
            {
                if (s[i] >= 'A' and s[i] <= 'Z')
                    continue;
                else
                {
                    flag = true;
                    break;
                }
            }
        }
    }
    // cout << flag << '\n';
    if (flag)
        cout << "No" << '\n';
    else
        cout << "Yes" << '\n';
    return 0;
}
