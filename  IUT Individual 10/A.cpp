#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    char c;
    cin >> c;
    if (c >= 'A' and c <= 'Z')
        cout << 'A' << '\n';
    else
        cout << 'a' << '\n';
    return 0;
}