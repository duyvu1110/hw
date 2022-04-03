#include<iostream>
using namespace std;
int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   //int 
   int a[4] = {1,2,3};
   for (int *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   // double
   double a[4] = {1,2,3};
   for (double *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}
// khi thay c++ bang c+=2 thi con tro tro den 2 vi tri vo dinh 