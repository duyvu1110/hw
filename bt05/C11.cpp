#include<bits/stdc++.h>
using namespace std;
string dectobina(int a){
    string ans="";
    while(a>0){
        ans+=char(a%2);
        a=a/2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string w=dectobina(10);
    cout<<w;
}