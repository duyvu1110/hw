/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int turtle[10]={3,3,3,3,3,-6,-6,1,1,1};
int rabbit[10]={0,0,9,9,-12,1,1,1,-2,-2};
bool Raceover(int a,int b){
    return (a==70||b==70);
}
void updateRace(int &posturtle, int&posrabbit){
    int k=rand()%10;
    posturtle+=turtle[k];
    int p=rand()%10;
    posrabbit+=rabbit[p];
    if(posturtle<0){
        posturtle=0;
    }
    if(posrabbit<0){
        posrabbit=0;
    }
    cout<<"vi tri cua rua dang la "<<posturtle<<endl;
    cout<<"vi tri cua tho dang la "<<posrabbit<<endl;
}
int main()
{
    int posturtle=0;
    int posrabbit=0;
    while(!Raceover(posturtle,posrabbit)){
        updateRace(posturtle,posrabbit);
    }
    if(posrabbit==70){
        cout<<"tho thang";
        
    }else{
        cout<<"rua thang";
       
    }
    return 0;
}
