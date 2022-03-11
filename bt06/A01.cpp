#include <iostream>

using namespace std;
void print(int a[]){
    cout<<&a<<" "<<&a[0]<<endl;
}
int main()
{
    int a[3]={1,2,3};
    cout<<&a<<" "<<&a[0]<<endl;
    print(a);
    //dia chi cua phantu dau tien trong mang o ham print va main giong nhau con dia chi cua mang thi khac
    return 0;
}
