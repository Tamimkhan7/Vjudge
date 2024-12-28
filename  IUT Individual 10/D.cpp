#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

const int N = 1e5 + 9;

int main()
{
    MTK;
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> freq(N, 0);
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
        sum += v[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int b, c;
        cin >> b >> c;

        if (freq[b] > 0)
        {
            sum -= 1LL * b * freq[b];
            sum += 1LL * c * freq[b];
            freq[c] += freq[b];
            freq[b] = 0;
        }

        cout << sum << '\n';
    }

    return 0;
}
