#include<iostream>
using namespace std;
int cnt=0;
char *concat(char a[], char b[]){
    char *ans=new char;
    for (char *cp = a; (*cp) != '\0'; cp++) {

        *(ans+cnt)=*cp;
    cnt++;
   }
   for (char *cp = b; (*cp) != '\0'; cp++) {
        *(ans+cnt)=*cp;
        cnt++;
   }
   return ans;
}
int main()
{
    char a[]="xin chao ";
    char b[]="viet nam";
    char *p=concat(a,b);
    for (char *cp = p; (*cp) != '\0'; cp++) {
       cout<<*cp;
   }
}
