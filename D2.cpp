#include <bits/stdc++.h>
#define Start_Coding()                \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
using namespace std;
typedef long long ll;

int find_pos(int a[], int n, int x)
{
    int low = 0, high = n - 1;
    int pos = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] <= x)
        {
            pos = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return pos;
}

void solved()
{
    int n;
    cin >> n;
    int A[n + 1], a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        a[i] = A[i];
    }
    sort(a, a + n);
    ll prefix_sum[n + 1];
    prefix_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        int x = find_pos(a, n, A[i]);
        cout << prefix_sum[n] - prefix_sum[x + 1] << ' ';
    }
    cout << '\n';
}

int32_t main()
{

    solved();
}
