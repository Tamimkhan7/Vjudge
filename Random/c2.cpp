#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
bool is_palindrome(string s)
{
    string xp;
    xp = s;
    reverse(xp.begin(), xp.end());
    if (xp == s)
        return true;
    else
        return false;
}
int32_t main()
{
    MTK;
    string s;
    cin >> s;
    int n = s.size();
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string ss;
            for (int k = i; k <= j; k++)
            {
                ss += s[k];
            }
            if (is_palindrome(ss))
            {
                int x = ss.size();
                mx = max(mx, x);
            }
        }
    }
    cout << mx << '\n';
}