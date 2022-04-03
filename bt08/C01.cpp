#include<iostream>
using namespace std;
void reverse(char a[]){
    int cnt=0;
    for (char *cp = a; (*cp) != '\0'; cp++) {
      cnt++;
   }
   for(int i=0;i<cnt/2;i++){
    char temp=a[i];
    a[i]=a[cnt-i-1];
    a[cnt-i-1]=temp;
   }

}
void deletechar(char a[], char c){
     for (char *cp = a; (*cp) != '\0'; cp++) {
      if(*cp==c) continue;
      else cout<<*cp;
   }
}
void pad_right(char a[], int n){
    int cnt=0;
     for (char *cp = a; (*cp) != '\0'; cp++) {
            cout<<*cp;
      cnt++;
   }
   while(cnt<=n){
    cout<<" ";
   }
}
void paid_left(char a[],int n){
    int cnt=0;
    for (char *cp = a; (*cp) != '\0'; cp++) {

      cnt++;
   }
   while(cnt<=n){
    cout<<" ";
   }
   for (char *cp = a; (*cp) != '\0'; cp++) {
            cout<<*cp;
   }
}
void truncate(char a[], int n){
    int cnt=0;
    for (char *cp = a; (*cp) != '\0'; cp++) {

      cnt++;
   }
   if(cnt<n){
     for (char *cp = a; (*cp) != '\0'; cp++) {

      cout<<*cp;
   }
   }else
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
void trim_left(char a[]){
    for (char *cp = a; (*cp) != '\0'; cp++) {
        if(*cp==' ') continue;
        else
      cout<<*cp;
   }
}
void trim_right(char a[]){
     for (char *cp = a; (*cp) != '\0'; cp++) {
        if(*cp==' ') continue;
        else
      cout<<*cp;
   }
}
bool is_palindrome(char a[]){
    char *p=new char;
    int i=0;
    for (char *cp = a; (*cp) != '\0'; cp++) {
        *(p+i)=*cp;
   }
   reverse(a);
   for (char *cp = a; (*cp) != '\0'; cp++) {
       if(*cp==*(p+i)){
           i++;
       }else{
           return false;
       }
   }
   return true;
}
int main()
{
    char foo[]="chiu day cha biet noi gi";
//    reverse(foo);
//    deletechar(foo,'d');
//    truncate(foo,30);
}
