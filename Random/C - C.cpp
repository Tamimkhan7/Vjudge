#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    s = '#' + s;
    int n = s.length() - 1;
    cout << n << '\n';
    int cnt = 0;
    for (int i = 1; i + i <= n; ++i)
    {
        if (s[i] != s[n - i + 1])
        {
            cout << s[i] << ' ' << s[n - i + 1] << '\n';
            ++cnt;
        }
    }
    cout << cnt << '\n';
    if ((cnt <= 1 && (n & 1)) || cnt == 1)
        puts("YES");
    else
        puts("NO");
    return 0;
}
