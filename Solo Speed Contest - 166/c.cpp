#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int32_t main()
{
    MTK;
    string s, t;
    cin >> s >> t;

    int n = s.size(), m = t.size();
    bool found = false;

    for (int i = n - m; i >= 0; i--)
    {
        bool ok = true;

        for (int j = 0; j < m; j++)
        {
            if (s[i + j] != '?' && s[i + j] != t[j])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            for (int j = 0; j < m; j++)
                s[i + j] = t[j];

            found = true;
            break;
        }
    }

    if (found)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                s[i] = 'a';
        }
        cout << s << '\n';
    }
    else
        cout << "UNRESTORABLE\n";

    return 0;
}
