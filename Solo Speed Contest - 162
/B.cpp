#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> s(129);
    unordered_map<int, int> last_occur;
    vector<unordered_map<int, int>> fre(129);

    s[1] = 0;
    fre[1][0] = 1;
    last_occur[0] = 1;

    for (int i = 2; i <= 128; ++i)
    {
        int last = s[i - 1];
        if (last_occur.find(last) == last_occur.end())
            s[i] = 0;
        else
            s[i] = i - 1 - last_occur[last];

        last_occur[last] = i - 1;
        fre[i] = fre[i - 1];
        fre[i][s[i]]++;
    }

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int nth_element = s[N];
        cout << fre[N][nth_element] << endl;
    }

    return 0;
}
