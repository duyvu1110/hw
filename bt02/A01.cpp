#include<iostream>
using namespace std;
int main()
{
    int n=2;
    while(n<=100){
        cout<<n<<" ";
        n+=2;
    }
    for(int i=1;i<=50;i++){
        cout<<2*i<<" ";
    }
    int k=2;
    do{
        cout<<k<<" ";
        k+=2;
    }while(k<102);
}