/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void print(int y[], int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<y[i];j++) cout<<0<<" ";
        cout<<1<<" ";
        for(int j=y[i]+1;j<n;j++) cout<<0<<" ";
        cout<<endl;
    }
}
bool is_safe(int a[], int row, int col){
    for(int i=0;i<row;i++){
        if(a[i]==col) return false;
        if(abs(row-i)==abs(a[i]-col)) return false;
    }
    return true;
}
void solve(int y[],int n,int row){
    if(n==row){
        print(y,n);
        return;
    }else{
        for(int col=0;col<n;col++){
            if(is_safe(y,row,col)){
                y[row]=col;
                solve(y,n,row+1);
            }
        }
    }
}
int main(int argc, char** argv)
{
    
    int a[1000];
    int n;cin>>n;
    solve(a,n,0);
    
}
