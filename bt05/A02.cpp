/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
long facto(long x){
    if(x<=1){
        cout<<"x="<<x<<"at"<<&x<<endl;
        return 1;
    }else{
        cout<<"x="<<x<<"at"<<&x<<endl;
        return x*facto(x-1);
    }
}
// dia chi cua gia tri ham facto sau moi lan tra ve giam 20
int main()
{
    long x=10;
    long k=facto(x);
    cout<<k;
}
