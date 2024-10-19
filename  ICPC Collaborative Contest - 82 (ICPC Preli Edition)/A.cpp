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
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < 3; i++)
        if (s[i] == '7')
            cnt++;
    if (cnt != 0)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
    return 0;
}