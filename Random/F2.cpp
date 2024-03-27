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
    int n, q;
    cin >> n;
    string s;
    cin >> s >> q;
    set<int> ss[26];
    for (int i = 0; i < n; i++)
    {
        ss[(int)s[i] - 'a'].insert(i);
     
    }
    for (auto it = ss.begin(); it != ss.end(); it++)
        while (q--)
        {
        }
}

/*int unique_element(vector<string> v)
{
    sort(all(v));
    auto it = unique(all(v));
    v.resize(distance(v.begin(), it));
    return v.size();
}
void solve()
{
    int n, q;
    cin >> n;
    string s;
    cin >> s >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a;
        if (a == 1)
        {
            cin >> b;
            string sp, x;
            cin >> sp;
            x = s[b - 1];
            if (x != sp)
                s[b - 1] = sp[0];
        }
        else
        {
            cin >> b >> c;
            vector<string> v;
            string ss;
            for (int i = b - 1; i < c; i++)
            {
                ss = s[i];
                v.push_back(ss);
            }
            int x = unique_element(v);
            cout << x << '\n';
        }
    }
}
int32_t main()
{
    MTK;
    solve();
}*/