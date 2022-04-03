#include<iostream>
using namespace std;
int main()  {
   char *s;
   char foo[] = "Hello World";
   s = foo;
   printf("s is %s\n",s);
//   s[0] = foo[0];
   printf("s[0] is %s\n",*s);
   return(0);
}

