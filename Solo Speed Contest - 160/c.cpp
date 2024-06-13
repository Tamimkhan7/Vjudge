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
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        int set_bit_count = 0, mx_bit = 0, final_max_bit = 0;
        for (auto c : s)
        {
            if (c == '1')
            {
                set_bit_count++;
                mx_bit++;
            }
            else
            {
                final_max_bit = max(final_max_bit, mx_bit);
                mx_bit = 0;
            }
            final_max_bit = max(final_max_bit, mx_bit);
        }
        // cout << set_bit_count << ' ' << final_max_bit << '\n';
        cout << (set_bit_count * x + final_max_bit * y) << '\n';
    }
    return 0;
}
