#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;cin>>n;
    long long m,k;cin>>m>>k;
    long long min1=m;
    long long min2=k;
    for(int i=0;i<n-1;i++){
        long long n,p;cin>>n>>p;
        if(n<min1) min1=n;
        if(p<min2) min2=p;
    }
    cout<<min1*min2;
}