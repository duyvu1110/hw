#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long money;
    cin>>money;
    for(int i=1;i<=12;i++){
        money+=round(money*0.02);
    }
    cout<<money;

    return 0;
}
