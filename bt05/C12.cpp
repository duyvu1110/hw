#include <iostream>

using namespace std;
long tohop(int n,int k){
    if(k==0||k==n) return 1;
    if(k==1) return n;
    return tohop(n-1,k)+tohop(n-1,k-1);
}
int kiemtra(int k,int n){
    if(k>=0&&k<=n){
        if(n>=1&&n<=20){
            return 1;
        }else{
            return 0;
        }
        
    }else{
        return 0;
    }
}
void nhapkn(int k[],int n[],int &sophantu){
    int p,q;cin>>p>>q;
    if(p==-1&&q==-1) return;
    k[sophantu]=p;
    n[sophantu]=q;
    sophantu++;
    nhapkn(k,n,sophantu);
}
int main()
{
    int k[10000];
    int n[10000];
    int spt=0;
    nhapkn(k,n,spt);cout<<spt;
    for(int i=0;i<spt;i++){
        cout<<tohop(n[i],k[i])<<endl;
    }
    return 0;
}