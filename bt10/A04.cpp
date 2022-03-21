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

int main()
{
    Point A(3.5,2.3);
    cout<<&A<<" "<<&A.x<<" "<<&A.y;
}
// dia chi cua bien A cung chinh la dia chi cua A.x