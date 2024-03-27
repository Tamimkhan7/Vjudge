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
void solve()
{
    string d;
    cin >> d;
    deque<char> s;
    for (auto x : d)
        s.push_back(x);
    int len = s.size();
    int a = 0, b = 0, c = 0, flag = 0;
    while (!s.empty())
    {

        if (s.front() == 'E')
        {
            if (c == 0)
            {
                b++;
                s.pop_front();
            }
            else
            {
                break;
                flag = 1;
            }
        }
        else if (s.front() == 'C')
        {
            if (c == 0 and b == 0){
                a++;
                s.pop_front();
            }
            else
            {
                break;
                flag = 1;
            }
        }
        else{
            c++;
            s.pop_front();
        }
    }
    // cout << s.size() << '\n';
    if (s.size()==0)
        cout << "yes" << '\n';
    else
        cout << "no" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}