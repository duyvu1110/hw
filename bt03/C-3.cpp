#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    string s=to_string(n);
    string w=s;
    reverse(s.begin(),s.end());
    if(s==w) return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int p,q;cin>>p>>q;
        int cnt=0;
        for(int i=p;i<=q;i++){
            if(check(i)) cnt++;
        }
        cout<<cnt<<endl;
    }
}