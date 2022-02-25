#include <iostream>
#include <cmath> 
#include <deque>
using namespace std;

//21
void TriangleArea(){
    double a,b,c;cin>>a>>b>>c;double p=(a+b+c)/2;
    if(a<=0||b<=0||c<=0||p-a<=0||p-b<=0||p-c<=0) cout<<"Invalid Triangle";
    else cout<<sqrt(p*(p-a)*(p-b)*(p-c));
}
//22
void BMI(){
    double mHeight, kgWeight;cin>>kgWeight>>mHeight;
    cout<<kgWeight/mHeight/mHeight;
}
//23
void MaxWithoutIf(){
    int a,b;cin>>a>>b;cout<<((a+b)-abs(a-b))/2;
}
//24
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool isNN(int year){
    if(year%4!=0)return false;
    if(year%100==0&&year%400!=0)return false;
    return true;
}
void DayOfWeek(){
    int d,m,y;cin>>d>>m>>y;
    int dayMod7=0;
    for(int i=1;i<y;i++){
        if(isNN(i))dayMod7=(dayMod7+2)%7;
        else dayMod7=(dayMod7+1)%7;
    }
    for(int i=1;i<m;i++){
        dayMod7=(dayMod7+month[i])%7;
    }
    dayMod7=(dayMod7+d-1)%7;
    switch(dayMod7){
        case 0: cout<<"Monday";break;
        case 1: cout<<"Tuesday";break;
        case 2: cout<<"Wednesday";break;
        case 3: cout<<"Thursday";break;
        case 4: cout<<"Friday";break;
        case 5: cout<<"Saturday";break;
        case 6: cout<<"Sunday";break;
    }
}
//25
void midNum(){
    deque<int>d;
    for(int i=0;i<5;i++){
        int x;cin>>x;
        if (i==0) d.push_back(x);
        else{
            if(x>=d.back())d.push_back(x);
            else d.push_front(x);
        }
    }
    cout<<d[2];
}
//26
void BasicStatistics(){
    int n,MAX,MIN;cin>>n;double s=0.0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(i==1){MAX=x;MIN=x;}
        else{
            if(MAX<x)MAX=x;if(MIN>x)MIN=x;
        }
        s+=x;
    }
    cout<<"max: "<<MAX<<" min: "<<MIN<<" average: "<<s/n;
}
//27
void mod5(){
    int N;
    while(cin>>N){
        if(N==-1){cout<<"Bye";break;}
        cout<<(N>=0&&N%5==0)? (N/5):-1;
    }
}
//28
void timeInDay(){
    for(int i=0;i<=23;i++){
        if(i==0)cout<<"12 midnight"<<endl;
        else if (i<=11) cout<<i<<"am\n";
        else if (i==12)cout<<"12 noon\n";
        else cout<<i-12<<"pm\n";
    }
}
//29
void triangle1(){for(int i=1;i<=5;i++)cout<<string(i,'*')<<endl;}
//30
void triangle2(){for(int i=5;i>=1;i--)cout<<string(i,'*')<<endl;}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    return 0;;
}
