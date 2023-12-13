#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    int a[n];
    double sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+= (double)a[i];
    }
    //sort(a, a+n);
    for(int i=0; i<n; i+=2)
    {
        int ans = a[i]+a[i+1];
        double res =(double)(ans*p)/100;
        sum -=res;
    }
cout<<sum<<'\n';

}

