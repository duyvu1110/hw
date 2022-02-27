#include<iostream>
using namespace std;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool leapyear(int y){
    if((y%4==0&&y%100!=0)||(y%400==0)){
        return true;
    }
    return false;
}
void print(int d,int m, int y){
    if(d<10){
        cout<<"0"<<d<<"-";
    }else{
        cout<<d<<"-";
    }
    if(m<10){
         cout<<"0"<<m<<"-";
    }else{
        cout<<m<<"-";
    }
    cout<<y<<endl;
    
    
}
void solvemin(int d,int m,int y,int k){
    while(k>=366){
        if(leapyear(y)) {
            k-=366;
            y++;
        }
        else{
            k-=365;
            y++;
        }
    }
    while(k>0){
        d++;
        if(leapyear(y)){
            month[2]++;
        }
        if(d>month[m]){
            d=1;
            if(m==12) {
                m=1;
                y++;
            }else{
                m++;
            }            
        }
        k--;
    }
    print(d,m,y);
}
void solvemax(int d,int m,int y, int k){
    while(abs(k)>=366){
        if(leapyear(y)) {
            k+=366;
            y--;
        }
        else{
            k+=365;
            y--;
        }
    }
    while(k<0){
        d--;
        if(leapyear(y)){
            month[2]++;
        }
        if(d==0){
            if(m==1){
                m=12;
                y--;
            }else
            m--;
            d=month[m];
        }
        k++;
    }
    print(d,m,y);
}
int main()
{
    int d,m,y;
    cin>>d>>m>>y;
    while(true){
        int k;cin>>k;
        if(k==0) return 0;
        if(k>=0)
        solvemin(d,m,y,k);
        else{
            solvemax(d,m,y,k);
        }
    }
    return 0;
}
