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

int32_t main()
{
    MTK;
    string s, x, y, z;
    cin >> s;
    x += s[0];
    x += s[1];
    x += s[2];
    x += s[3];
    int ans = stoi(x);
    y += s[5];
    y += s[6];
    int ans1 = stoi(y);
    z += s[8];
    z += s[9];
    int ans2 = stoi(z);
    if (ans <= 2019 and ans1 <= 04 and ans2 <= 30)
        cout << "Heisei" << '\n';
    else
        cout << "TBD" << '\n';
}
