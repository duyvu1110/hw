/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;
void test(int a[]){
    cout<<&a[0]<<endl;
    return;
}
void test2(int &x){
    cout<<&x<<endl;
}
void test3(string a){
    cout<<&a<<endl;
}
void test4(char p){
    cout<<(void*)&p<<endl;
}
// mang a truyen bang tham chieu
// C++string dung co che passbyreference
int main()
{
    int a[100];
    cin>>a[0];
    test(a);
    test2(a[0]);
    string s="anh";
    char p='a';
    test3(s);
    test4(p);
    return 0;
}
