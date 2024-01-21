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
bool is_prime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int32_t main()
{
    MTK;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = a; i <= b; i++)
    {
        int flag = 0;
        for (int j = c; j <= d; j++)
        {
            int x = i + j;
            if (is_prime(x) == true)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "Takahashi" << '\n';
            return 0;
        }
    }
    cout << "Aoki" << '\n';
}