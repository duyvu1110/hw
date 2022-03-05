#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    set<int> s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    if(s.size()<n){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}