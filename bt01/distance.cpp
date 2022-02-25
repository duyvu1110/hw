#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ax,ay;
    double bx,by;
    cin>>ax>>ay>>bx>>by;
    double d=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    cout<<d;
    return 0;
}
