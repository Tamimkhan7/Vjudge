#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> conditions(M);
    for (int i = 0; i < M; ++i)
    {
        cin >> conditions[i].first >> conditions[i].second;
    }

    for (int num = 0; num <= 1000; ++num)
    {
        string numStr = to_string(num);
        if (numStr.length() == N)
        {
            // cout << numStr << '\n';
            bool satisfies = true;
            for (auto &cond : conditions)
            {
                int idx = cond.first - 1;
                // cout << idx << '\n';
                if (idx >= N || numStr[idx] != cond.second + '0')
                {
                    satisfies = false;
                    break;
                }
            }
            // cout << num << '\n';
            if (satisfies)
            {
                cout << num << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
