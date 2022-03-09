#include<iostream>
using namespace std;
void print(int m,int n){
     for(int i=0;i<m/2;i++){
        cout<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    for(int i=0;i<m/2;i++){
        cout<<" ";
    }
}
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++){
            print(2*n-2-2*i,2*n-1-(2*n-2-2*i));
        cout<<endl;
    }
}