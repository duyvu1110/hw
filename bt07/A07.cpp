#include<bits/stdc++.h>
using namespace std;
int str(string s,string w){
    for(int i=0;i<w.length();i++){
        if(s[i]!=w[i]) return 1;
    }
    return 0;
}
int main()
{
    string s,w;
    getline(cin,s);
    getline(cin,w);
    int cnt=0;
    int pos=0;
    while(s.length()>=w.length()){
        if(str(s,w)!=0){
            s.erase(pos,1);
           
        }else{
            s.erase(pos,w.length());
           
            cnt++;
        }
    }
    cout<<cnt;

}