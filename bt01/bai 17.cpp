#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if((n%4==0&&n%100!=0)||n%400==0){
        cout<<"True";
    }else{
        cout<<"False";
    }
}
