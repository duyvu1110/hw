#include<iostream>
using namespace std;
int main()
{
    long long fullmon;cin>>fullmon;
    int tax1=fullmon*9/100;
    fullmon-=tax1;
    int tax2=0;
    if(fullmon>2000000){
        tax2=500000*10/100+500000*15/100+(fullmon-2000000)*20/100;
    }else{
        if(fullmon>1500000){
            tax2=500000*10/100+(fullmon-1500000)*15/100;
        }else{
            if(fullmon>1000000){
                tax2=(fullmon-1000000)*10/100;
            }
        }
    }
    cout<<fullmon-tax2;
}