#include <iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    if(t==100){
        cout<<12000*t;
        return 0;
    }
    if(t<=150){
        cout<<12000*100+(t-100)*16000;
        return 0;
    }
    if(t<=200){
        cout<<12000*100+16000*50+(t-150)*20000;
        return 0;
    }
    if(t>200){
        cout<<12000*100+16000*50+50*20000+(t-200)*25000;
    }
    return 0;
}
