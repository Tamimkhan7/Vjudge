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
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - 'A';
        int ans = (x + n) % 26 + 'A';
        cout << char(ans);
    }
    cout << '\n';
}
