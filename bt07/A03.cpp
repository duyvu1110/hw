/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int count_even(int *p,int size){
    int cnt=0;
    for(int i=0;i<size;i++){
        if(p[i]%2==0) cnt++;
    }
    return cnt;
}
int main()
{
    int size;cin>>size;
    int *p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i;
    }
    cout<<count_even(p,size);
}