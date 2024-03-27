#include <bits/stdc++.h>
using namespace std;
int32_t main()
{

    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0, mx = -1e9;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
        else
        {
            cnt++;
            mx = max(cnt, mx);
            cnt = 0;
        }
    }
    cnt++;
    mx = max(cnt, mx);
    cout << mx << '\n';
}