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

int main()
{
    MTK;
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            x++;
    }
    // cout << x << '\n';
    for (int i = 0; i < x; i++)
    {
        if (s[i] == 'W')
            cnt++;
    }
    cout << cnt << '\n';
}
