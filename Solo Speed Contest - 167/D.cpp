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

bool is_valid(int x, vector<int> &d)
{
    while (x > 0)
    {
        if (find(all(d), x % 10) != d.end())
            return false;
        x /= 10;
    }
    return true;
}

int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++)
        cin >> v[i];

    for (int i = n;; i++)
    {
        if (is_valid(i, v))
        {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}
