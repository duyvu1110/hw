#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    string w=s;
    reverse(w.begin(),w.end());
    if(w==s){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}