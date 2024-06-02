#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    for (int i = 1; i < (1 << n); i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                v.push_back(a[j]);
        }

        int sum = accumulate(all(v), 0);
        int x = v.size();
        if (x > 0 && sum % x == 0)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}
