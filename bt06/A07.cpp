#include<bits/stdc++.h>
using namespace std;
void permute(string s, int l, int r){
    if(r==l) {
        cout<<s<<endl;
        return;
    }else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
       
}
int main()
{
    string s;cin>>s;
    permute(s,0,s.length()-1);
}