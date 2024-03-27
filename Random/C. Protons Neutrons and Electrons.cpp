#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007

int32_t main()
{
    int x, b, c;
    cin >> x >> b >> c;
    int a[3];
    a[0] = x;
    a[1] = b;
    a[2] = c;
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }
    if (pos != 0)
        cout << "Positive numbers: " << pos << '\n';
    if (neg != 0)
        cout << "Negative numbers: " << neg << '\n';
    if (zero != 0)
        cout << "Zeros: " << zero << '\n';
}