#include <iostream>

using namespace std;

int main()
{
    char c = 'A', d = 'B';
    char* p1 = &c;
    char* p2 = &d;
    char* p3;
    p3 = &d;
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;
        p3 = p1;
    cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;
        *p1 = *p2;
    cout << "*p1 = " << *p1 << ", p1 = "<< p1 << endl;

    return 0;
}
// output dung thu nhat la *p3=B va p3=0x5678
// output dung thu hai la *p3=A va p3=0x1234
//out put dung thu ba la *p1=B va p1 la mot dia chi khac p3