#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int ans = 0;
        for (int i = 0; i < b.size(); i++)
        {
            for (int j = 0; j < a.size(); j++)
            {
                if (b[i] == a[j])
                {
                    ans++;
                    break;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
