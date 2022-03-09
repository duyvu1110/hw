#include<iostream>
#include<math.h>
using namespace std;
int rndup(double x){
    return ceil(x);
}
int rnddown(double x){
    return floor(x);
}
//khong su dung ham co san
int rnd(double x){
    
    double c=x-int(x);
    if(c>0.5) return int(x+1);
    return int(x);
}
int main()
{
    double n;cin>>n;
    cout<<rndup(n)<<" "<<rnddown(n)<<" "<<rnd(n);
}