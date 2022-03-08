/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void thamchieu(int &x){
    cout<<&x<<endl;
    return;
}
void thamtri(int x){
    cout<<&x<<endl;
    return;
}
// dia chi cua 2 bien x khac nhau 
int main()
{
    int k=3;
    thamtri(k);
    thamchieu(k);
}
