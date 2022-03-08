/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[3];
    char b[3];
    for(int i=0;i<3;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<3;i++){
        cout<<(void*)&a[i]<<" ";
    }
    for(int i=0;i<3;i++){
        cout<<(void*)&b[i]<<" ";
    }
    // voi kieu int thi dia chi khong theo thu tu
    // voi kieu char thi dia chi theo thu tu
    return 0;
}
