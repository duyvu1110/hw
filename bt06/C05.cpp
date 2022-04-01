#include<iostream>
using namespace std;
void print(int x[],int size){
    for(int i=1;i<=size;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
void solve(int n,int x[],int cnt,int i){
    if(n==0){
        print(x,cnt);
    }else{
        n-=x[i];
        solve(n,x,cnt++,i++);
    }
}
int main()
{
    int n;cin>>n;
    int x[n+1];
    x[0]=n;
}