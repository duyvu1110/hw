/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;
int a[5]={1,2,3,4,5};
bool binarysearch(int a[],int key, int low,int high){
    int mid=low+(high-low)/2;
    if(low>high) return false;
    if(a[mid]==key) return true;
    if(a[mid]<key){
        return binarysearch(a,key,mid+1,high);
    }
    if(a[mid]>key){
        return binarysearch(a,key,low,mid-1);
    }
}
bool binarysearch2(int a[],int key, int low,int high){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==key) return true;
        if(a[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return false;
}
int main()
{
    int key;
    cin>>key;
    cout<<binarysearch2(a,key,0,4)<<endl;
    cout<<binarysearch(a,key,0,4);  
    // binarysearch su dung dequy mat nhieu thoi gian hon dung vong lap
}