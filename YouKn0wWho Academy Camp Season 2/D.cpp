#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int main()
{
    MTK;
    int N, M, L, Q;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) 
        cin >> A[i];  

    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < M; i++)
            cin >> B[i];

    cin >> L;
    vector<int> C(L);
    for (int i = 0; i < L; i++)
        cin >> C[i];
 


    cin >> Q;
    vector<int> X(Q);
    for (int i = 0; i < Q; i++)  
        cin >> X[i];

    unordered_set<ll> sumBC;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < L; j++)      
            sumBC.insert((ll)B[i] + C[j]);
      
    }

    for (int i = 0; i < Q; i++)
    {
        bool found = false;
        for (int j = 0; j < N; j++)
        {
            if (sumBC.count(X[i] - A[j]))
            {
                found = true;
                break;
            }
        }
        cout << (found ? "Yes" : "No") << '\n';
    }

    return 0;
}
