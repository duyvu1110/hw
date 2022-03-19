/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int point[6]={1,2,3,4,5,6};
bool Gameover(int a,int b){
    return (a==100||b==100);
}
void updateGame1(int &point1, int& point2,int &dem){
    if(dem%2==1){
        int k=rand()%10;
        point1+=point[k%6];
        cout<<"xuc xac nguoi choi 1: "<<point[k%6]<<"   Tong nguoi 1: "<<point1<<endl;
    }else{
        int k=rand()%10;
        point2+=point[k%6];
        cout<<"xuc xac nguoi choi 2: "<<point[k%6]<<"   Tong nguoi 2: "<<point2<<endl;
    }
}
void updateGame2(int &point1, int& point2,int &dem){
    if(dem==1){
         int k=rand()%10;
        point1+=point[k%6];
        cout<<"xuc xac nguoi choi 1: "<<point[k%6]<<"   Tong nguoi 1: "<<point1<<endl;
    }else{
        if(point1<point2){
             int k=rand()%10;
        point1+=point[k%6];
        cout<<"xuc xac nguoi choi 1: "<<point[k%6]<<"   Tong nguoi 1: "<<point1<<endl;
        }
        if(point2<point1){
            int k=rand()%10;
        point2+=point[k%6];
        cout<<"xuc xac nguoi choi 2: "<<point[k%6]<<"   Tong nguoi 2: "<<point2<<endl;
        }
        if(point1==point2){
            if(dem%2==1){
        int k=rand()%10;
        point1+=point[k%6];
        cout<<"xuc xac nguoi choi 1: "<<point[k%6]<<"   Tong nguoi 1: "<<point1<<endl;
    }else{
        int k=rand()%10;
        point2+=point[k%6];
        cout<<"xuc xac nguoi choi 2: "<<point[k%6]<<"   Tong nguoi 2: "<<point2<<endl;
    }
        }
    }
       
        
    
}
int main()
{
    int point1=0;
    int point2=0;
    int dem=1;
    while(!Gameover(point1,point2)){
        updateGame2(point1,point2,dem);
        dem++;
    }
    if(Gameover(point1,point2)){
        if(point2==100){
            cout<<"nguoi choi 2 thang";
            return 0;
        }else{
            cout<<"nguoi choi 1 thang";
            return 0;
        }
    }
    return 0;
}
