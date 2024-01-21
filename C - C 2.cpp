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
    MTK;
    int n;
    cin >> n;
    vector<int> odd, even;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());
    for (int i = 0; i < odd.size(); i++)
        cout << odd[i] << ' ';
    for (int i = 0; i < even.size(); i++)
        cout << even[i] << ' ';
    cout << '\n';
}