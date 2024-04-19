#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int main()
{
    MTK;
    string s;
    cin >> s;
    int first = 0, cnt = 0;
    while (1)
    {
        cnt = 0;
        for (int i = 1; i < (int)s.size() - 1; i++)
        {
            if (s[i - 1] != s[i + 1])
            {
                cnt = 0;
                if (first == 0)
                {
                    s.erase(s.begin() + i);
                    first++;
                    i = 0;
                }
                else
                {
                    first = 0;
                    s.erase(s.begin() + i);
                    i = 0;
                }
            }
            s.resize((int)s.size());
        }
        if (cnt == 0)
            break;
    }
    if (first == 1)
        cout << "First" << '\n';
    else
        cout << "Second" << '\n';
}
