#include<bits/stdc++.h>
using namespace std;
char ans[100000];char a[100000];
void print(char a[],int k){
    for(int i=1;i<k+1;i++){
        cout<<a[i];
    }
    cout<<endl;
}
void solve(int i,char a[],char ans[],int n,int k,int start){
    for(int j=start;j<n-k+i+1;j++){
        ans[i]=a[j];
        if(i==k) print(ans,k);
        else solve(i+1,a,ans,n,k,j+1);
    }
}
int main()
{
    int n,k;cin>>n>>k;
    
    // cout<<char(int('a'+1));
    for(int i=1;i<=n;i++){
        a[i]=char(int('a')+i-1);
    }
   
    solve(1,a,ans,n,k,1);
}
