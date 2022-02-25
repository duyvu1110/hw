#include<iostream>
#include<string>
using namespace std;
int main()
{
    string f0="a";
    string f1="b";
    int n;cin>>n;
    string ans="";
    if(n==0){
        cout<<f0;
        return 0;
    }
    if(n==1){
        cout<<f1;
        return 0;
    }
    for(int i=2;i<=n;i++){
        ans=f1+f0;
        f0=f1;
        f1=ans;
    }
    cout<<ans;
}
