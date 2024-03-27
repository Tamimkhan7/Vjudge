#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << min(b, (a - b)) << '\n';
    }
}