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
    cin >> n;
    vector<int> v(n);
    multiset<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        se.insert(v[i]);
    }
    sort(all(v));
    int mid = n / 2;
    if (n % 2)
        cout << v[mid] << '\n';
    else
        cout << v[mid - 1] << '\n';
    return 0;
}