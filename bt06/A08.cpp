#include<bits/stdc++.h>
using namespace std;
int n;
bool a[100005];
void print(){
    for(int i=1;i<=n;i++){
        if(a[i]){
            cout<<a[i]
        }
        
    }
    cout<<endl;
}
void tohop(int i){
    if(i==n){
        print();
        return;
    }
    a[i]=0;
    tohop(i+1);
    a[i]=1;
    tohop(i+1);

}
int main()
{
    cin>>n;
    tohop(1);
}