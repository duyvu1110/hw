#include<iostream>
using namespace std;

bool binarysearch2(int *a,int key, int low,int high){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(*(a+mid)==key) return true;
        if(*(a+mid)>key){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return false;
}
int main()
{
    int n;cin>>n;
    int *p=new int [n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int k;cin>>k;
    cout<<binarysearch2(p,k,0,n);
}