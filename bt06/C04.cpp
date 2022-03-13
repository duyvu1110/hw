/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<cmath>
using namespace std;

char screen[50][50];
void H(int N,int xStart,int yStart);
void h_reverse(int N,int xStart,int yStart);
void H(int N,int xStart,int yStart){
    if(N==0){
        screen[xStart][yStart]='o';
        return;
    }
    int n=N/2;
    H(n,xStart,yStart);
    H(n,n+xStart,yStart);
    H(n,xStart,n+yStart);
    h_reverse(n,n+xStart,n+yStart);
}
void h_reverse(int N,int xStart,int yStart){
    if(N==0){
        screen[xStart][yStart]='.';
        return;
    }
    int n=N/2;
    h_reverse(n,xStart,yStart);
    h_reverse(n,n+xStart,yStart);
    h_reverse(n,xStart,n+yStart);
    H(n,n+xStart,n+yStart);
}
int main(){
    int n;cin>>n;
    H(pow(2,n),0,0);
    for(int i=0;i<pow(2,n);i++){
        for(int j=0;j<pow(2,n);j++){
            cout<<screen[i][j];
        }cout<<endl;
    }
}