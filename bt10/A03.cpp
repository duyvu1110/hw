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
    Point(){}
    Point(double _x,double _y){
        x=_x;
        y=_y;
    }
};
Point mid_point(Point A,Point B){
    Point ans;
    ans.x=(A.x+B.x)/2;
    ans.y=(A.y+B.y)/2;
    return ans;    
}
void print(Point a){
    cout<<a.x<<" "<<a.y;
}
int main()
{
    Point A(3.5,2.3);
    Point B(3.3,5.3);
    Point C=mid_point(A,B);
    print(C);
}