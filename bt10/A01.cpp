#include<iostream>
using namespace std;
struct Point
{
    double x,y;
    /* data */
};
void print(Point a){
    cout<<a.x<<" "<<a.y;
}

int main()
{
    Point A;
    A.x=3.0;
    A.y=4.3;
    print(A);
}