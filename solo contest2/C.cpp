#include <bits/stdc++.h>
using namespace std;

int euclideanDistanceSquare(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    return dx * dx + dy * dy;
}

int main()
{
    int N;
    cin >> N;

    vector<int> x(N), y(N);

    for (int i = 0; i < N; ++i)
        cin >> x[i];

    for (int i = 0; i < N; ++i)
        cin >> y[i];

    int maxDistSquare = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            int distSquare = euclideanDistanceSquare(x[i], y[i], x[j], y[j]);
            maxDistSquare = max(maxDistSquare, distSquare);
        }
    }

    cout << maxDistSquare << endl;

    return 0;
}
