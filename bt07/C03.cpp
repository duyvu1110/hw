/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int substance[4]={1,2,3,4};
string value[13]={"2","3","4","5","6","7","8","9","10","J","Q","Y","Z"};
struct Cards {
    int x; string v;
    Cards(){};
    bool operator ==(Cards othercards){
        if(x==othercards.x&&v==othercards.v) return true;
        return false;
    }
};
void inquanbai( Cards khoa){
    if(khoa.v=="Z"){
        cout<<"A"<<" ";
    }else{
        if(khoa.v=="Y"){
            cout<<"K"<<" ";
        }else{
            cout<<khoa.v<<" ";
        }
    }
    
    if(khoa.x==1){
        cout<<"bich"<<endl;
    }
     if(khoa.x==2){
        cout<<"tep"<<endl;
    }
     if(khoa.x==3){
        cout<<"ro"<<endl;
    }
     if(khoa.x==4){
        cout<<"co"<<endl;
    }
}
bool uutienhon(Cards khoa1, Cards khoa2){
    if(khoa1.x>khoa2.x){
        return true;
    }else{
        if(khoa1.x<khoa2.x){
            return false;
        }else{
            if(khoa1.v>khoa2.v) return true;
            return false;
        }
    }
}
void setupcards(Cards &khoa){
    int k=rand()%10;
    khoa.x=substance[k%4];
    int p=rand()%100;
    khoa.v=value[p%13];
}
vector<Cards> shuffle(){
    vector<Cards> ans;
    while(true){
        Cards khoa;
        setupcards(khoa);
        vector<Cards>::iterator it=find(ans.begin(),ans.end(),khoa);
        if(it==ans.end()) ans.push_back(khoa);
        if(ans.size()==52) break;
    }
    return ans;
}
void inbainguoichoi(Cards player[][13]){
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            inquanbai(player[i][j]);
        }
        cout<<endl;
    }
}
int xacdinhnguoichoitruoc(Cards player[][13]){
    for(int i=0;i<4;i++){
        for(int j=0;j<13;j++){
            if(player[i][j].x==1&&player[i][j].v=="2"){
                return i;
            }
        }
    }
}
bool khadung(Cards khoa){
    if(khoa.x==0||khoa.v=="0"){
        return false;
    }else{
        return true;
    }
}
Cards chonbai(Cards player[][13], int nguoichoithu){
    while(!khadung(player[nguoichoithu][k%13])){
        int k=rand()%100;
    }
    return player[nguoichoithu][k%13];
}
void choibai(Cards &baivuachon, Cards baitruocdo, int nguoichoithu,bool turn[],Cards player[][13]){
    if(uutienhon(baivuachon,baitruocdo)){
        solabai[nguoichoithu]--;
        cout<<"nguoi choi thu"<<" "<<nguoichoithu+1<<" danh quan "<<inquanbai(baivuachon);
        baivuachon.x=0;
        baivuachon.v="0";
    }else{
        cout<<"nguoi choi thu"<<" "<<nguoichoithu+1<<" mat luot";
        turn[nguoichoithu]=false;
    }
}
void loainguoichoi(bool turn, int nguoichoithu, int &songuoichonchoi){
    if(turn[nguoichoithu]==false){
        songuoichonchoi--;
    }
}
bool aihetbaichua(solabai[]){
    return (solabai[0]==0||solabai[1]==0||solabai[2]==0||solabai[3]==0);
}
bool gameover(point[]){
    return (point[0]==100||point[1]==100||point[2]==100||point[3]==100);
}
int main()
{
    Cards khoa[52];
    for(int i=0;i<52;i++){
        khoa[i].x=substance[i%4];
        khoa[i].v=value[i%13];
    }
    vector<Cards> v=shuffle();
    Cards player[4][13];
    for(int i=0;i<13;i++){
        player[0][i%13].x=v[i].x;
        player[0][i%13].v=v[i].v;
    }
    for(int i=13;i<26;i++){
        player[1][i%13].x=v[i].x;
        player[1][i%13].v=v[i].v;
    }
    for(int i=26;i<39;i++){
        player[2][i%13].x=v[i].x;
        player[2][i%13].v=v[i].v;
    }
    for(int i=39;i<52;i++){
        player[3][i%13].x=v[i].x;
        player[3][i%13].v=v[i].v;
    }
    // inbainguoichoi(player);
    int point[4]={0};
    cout<<"nguoi bat dau choi la nguoi so "<<xacdinhnguoichoitruoc(player)+1;
    while(!gameover(point)){
        int solabai[4]={13};
        int k=xacdinhnguoichoitruoc(player);
        while(!aihetbaichua(solabai)){
            
        }
    }
}