#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e4;

vector<int> prime;

void sieve()
{
    vector<int> vis(N, false);
    vis[1] = true;
    for (int i = 2; i <= N; i++)
    {
        if (!vis[i])
        {
            prime.push_back(i);
            for (int j = i; j <= N; j += i)
                vis[j] = true;
        }
    }
}

int32_t main()
{
    MTK;
    sieve();
    int n;
    cin >> n;

    if (n < 25)
    {
        cout << -1 << '\n';
        return 0;
    }

    vector<int> v;
    for (auto x : prime)
    {
        if (n % x == 0)
        {
            int e = 0;
            while (n > 0 and n % x == 0)
            {
                v.push_back(x);
                e++;
                n /= x;
            }
        }
    }
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    sort(all(v));
    string s = "";
    int x, y;
    if (v[v.size() - 1] >= 5)
    {
        x = v[v.size() - 1], y = 1;
        for (int i = 0; i < (int)v.size() - 1; i++)
            y *= v[i];
    }
    else
    {
        x = v[v.size() - 1] * v[0], y = 1;
        for (int i = 1; i < (int)v.size() - 1; i++)
            y *= v[i];
    }
    if (x >= 5 and y >= 5)
    {
        for (int i = 0; i < x; i++)
        {
            int idx = i;
            for (int j = 0; j < y; j++)
            {
                if (idx % 5 == 0)
                    s += 'a';
                else if (idx % 5 == 1)
                    s += 'e';
                else if (idx % 5 == 2)
                    s += 'i';
                else if (idx % 5 == 3)
                    s += 'o';
                else if (idx % 5 == 4)
                    s += 'u';
                idx++;
            }
        }
        cout << s << '\n';
    }
    else
        cout << -1 << '\n';

    return 0;
}