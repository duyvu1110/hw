/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
struct Point
{
    double x,y;
    
};
void print(Point a){
    cout<<&a.x<<endl;
}
void print2(Point a){
    cout<<&a.x<<endl;
}

int main()
{
    Point A;
    A.x=3.0;
    cout<<&A.x<<endl;
    print(A);
    print2(A);
}