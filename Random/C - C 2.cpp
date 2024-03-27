#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
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