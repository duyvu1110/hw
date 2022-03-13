/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

string a[26]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
bool b[26];
void solve(int n,int k,string s){
    if(k==0){
        cout<<s<<endl;
    }else{
        for(int i=0;i<n;i++){
            if(b[i]==false){
                string w=s+a[i];
                b[i]=true;
                solve(n,k-1,w);
                b[i]=false;
            }
        }
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    string s="";
    solve(n,k,s);
}
