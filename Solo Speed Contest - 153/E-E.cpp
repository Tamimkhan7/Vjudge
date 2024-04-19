#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int x = 0;
    if (n == 2)
    {
        cout << 2 << ' ' << 2 << '\n';
        return;
    }
    while (1)
    {
        x++;
        int cnt = 0;
        for (int i = 1; i <= x; i++)
        {
            if (x % i == 0)
                cnt++;
        }
        int flag = 0;
        while (cnt--)
        {
            v.push_back(x);
            if (cnt != 0 and v.size() == n)
            {
                flag = 1;
                break;
            }
        }
        vector<int> ans;
        if (flag == 1)
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (x != v[i])
                    ans.push_back(v[i]);
            }
            v.clear();
        }
        if (!ans.empty())
        {
            for (int i = 0; i < ans.size(); i++)
                v.push_back(ans[i]);
        }
        if (v.size() == n)
            break;
    }
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
}
int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
