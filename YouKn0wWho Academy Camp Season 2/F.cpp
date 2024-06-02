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
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i]; 

    vector<bool> isNotCoprime(M + 1, false);
    auto markMultiples = [&](int x)
    {
        for (int j = x; j <= M; j += x)
            isNotCoprime[j] = true;     
    };

    set<int> primeFactors;
    auto findAndMarkPrimeFactors = [&](int num)
    {
        for (int p = 2; p * p <= num; ++p)
        {
            if (num % p == 0)
            {
                primeFactors.insert(p);
                while (num % p == 0)              
                    num /= p;              
            }
        }
        if (num > 1)
        {
            primeFactors.insert(num);
        }
    };

    for (int i = 0; i < N; i++)  
        findAndMarkPrimeFactors(A[i]);

    for (const int &factor : primeFactors)
        markMultiples(factor);
 
    vector<int> coprimes;
    for (int k = 1; k <= M; k++)
    {
        if (!isNotCoprime[k])     
            coprimes.push_back(k);      
    }

    cout << coprimes.size() << '\n';
    for (const int &num : coprimes) 
        cout << num << '\n';

    return 0;
}
