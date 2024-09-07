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
    int a, b;
    cin >> a >> b;
    string ans;
    for (int i = 0; i < b + 2; i++)
        ans += '#';
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        ans += '#' + s + '#';
    }
    for (int i = 0; i < b + 2; i++)
        ans += '#';
    int i = 0;
    for (auto x : ans)
    {
        cout << x;
        i++;
        if (b + 2 == i)
        {
            cout << '\n';
            i = 0;
        }
    }
    cout << '\n';
    return 0;
}