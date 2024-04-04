#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    string s;
    cin >> s;
    string ans = "cjb";

    for (int i = 0; i < s.size(); i++)
    {
        string ss = s.substr(i, 3);
        if (ss == ans)
        {
            cout << s[i] << s[i + 1] << s[i + 2] << ",";
            i += 2;
        }
        else
            cout << s[i];
    }

    cout << '\n';
    return 0;
}