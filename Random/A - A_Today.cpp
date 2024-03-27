#include <bits/stdc++.h>
using namespace std;
int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x < 300)
            cout << 300 * 10 << '\n';
        else
            cout << x * 10 << '\n';
    }
}