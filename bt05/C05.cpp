#include<iostream>
#include<cmath>
using namespace std;
bool prime(int a){
    if(a<2) return false;
    if(a==2) return true;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
    int a;cin>>a;
    cout<<prime(a);
}