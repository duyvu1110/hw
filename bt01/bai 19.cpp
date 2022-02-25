#include<bits/stdc++.h>
using namespace std;
bool check(int a[], int b[]){
    for(int i=0;i<3;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    int a[3];
    int b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+3);
    bool check1= check(a,b);
    if(check1==true){
        cout<<check1;
        return 0;
    }
    sort(a,a+3,greater<int>());
    bool check2 =check(a,b);
    if(check2==true){
        cout<<check2;
        return 0;
    }
    cout<<"false";
}