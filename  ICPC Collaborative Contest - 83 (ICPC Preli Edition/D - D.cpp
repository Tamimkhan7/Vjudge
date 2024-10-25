#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    int x = 1, y = n;
    while (x <= n && a[x] == b[x])
        x++;
    while (y >= 1 && a[y] == b[y])
        y--;

    if (x > y)
    {
        cout << "0\n";
        return 0;
    }

    vector<pair<int, int>> ans;
    vector<char> ch;
    bool possible = true;

    for (int i = x; i <= y; i++)
    {
        if (a[i] != b[i])
        {
            auto pos = find(a.begin() + i, a.begin() + y + 1, b[i]);

            if (pos != a.begin() + y + 1)
            {
                int j = pos - a.begin();
                ans.push_back({i, j});

                vector<int> val;
                for (int k = i; k <= j; k++)
                    val.push_back(a[k]);
                sort(all(val));
                if (b[i] == val[0])
                    ch.push_back('I');
                else
                    ch.push_back('D');
                swap(a[i], a[j]);
            }
            else
            {
                possible = false;
                break;
            }
        }
    }

    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].first << ' ' << ans[i].second << ' ' << ch[i] << '\n';

    return 0;
}
