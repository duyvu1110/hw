/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
bool check(int b[],int n){
    if(n==1) return true;
    if(b[n-1]-b[0]==0) return true; 
    if(b[n-2]==0) return true;
    for(int i=1;i<n-1;i++){
        if(b[i-1]==b[n-1]-b[i]){
            return true;
        }
    }
    return false;
}
int main()

{       
    int t;cin>>t;
    for(int k=0;k<t;k++){
        int n;cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        b[0]=a[0];
        for(int i=1;i<n;i++){
            b[i]=b[i-1]+a[i];
            cout<<b[i]<<" ";
        }
        if(check(b,n)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
}