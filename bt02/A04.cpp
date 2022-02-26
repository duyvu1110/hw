#include<iostream>
using namespace std;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool leapyear(int y){
    if((y%4==0&&y%100!=0)||(y%400==0)){
        return true;
    }
    return false;
}
void solvemin(int d,int m,int y,int k){
    while(k>0){
        d++;
        if(leapyear(y)){
            month[2]++;
        }
        if(d>month[m]){
            if(m==12) {
                m=1;
            }else{
                m++;
            }            
        }
        k--;
    }
    cout<<d<<"-"<<m<<"-"<<y;
}
int main()
{
    int d,m,y;
    cin>>d>>m>>y;
    while(true){
        int k;cin>>k;
        if(k==0) return 0;
        solvemin(d,m,y,k);
    }
    


    return 0;
}
