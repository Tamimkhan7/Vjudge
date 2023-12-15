#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    faster;
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    while (q--)
    {
        char type;
        cin >> type;
        if (type == '?')
        {
            int a, b;
            cin >> a >> b;

            int count = 0;
            sort(v.begin(), v.end());
            for (int i = 0; i < n; ++i)
            {
                if (v[i] >= a && v[i] <= b)
                {
                    count++;
                }
            }
            cout << count << endl;
        }
        else if (type == '!')
        {
            int k, x;
            cin >> k >> x;
            v[k - 1] = x;
        }
    }
    return 0;
}
