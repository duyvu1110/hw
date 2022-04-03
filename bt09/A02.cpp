 #include<iostream>
 using namespace std;
 int main(){
     int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p;// p2 sau buoc nay tro vao vung vo dinh
*p2 = 100;
 cout << *p2;
 delete p2;

 }
