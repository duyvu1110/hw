#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==b) return a;
    if(a<b) return gcd(a,b-a);
    if(a>b) return gcd(a-b,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}