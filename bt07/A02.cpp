#include<iostream>
using namespace std;
int f(int a[]){
    return sizeof a;
}
int main()
{
    int a[100];
    cout<<sizeof a<<endl;
    cout<<f(a);
}
// dua ra 2 ket qua khac nhau