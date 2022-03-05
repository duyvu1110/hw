#include<iostream>
using namespace std;
int a[10000][10000];
 void OddMagicSquare(int matrix[][10000], int n)
{
  int nsqr = n * n;
  int i=0, j=n/2;     

  for (int k=1; k<=nsqr; ++k) 
  {
    matrix[i][j] = k;

    i--;
    j++;

    if (k%n == 0) 
    { 
      i += 2; 
      --j; 
    }
    else 
    {
      if (j==n) 
        j -= n;
      else if (i<0) 
        i += n;
    }
  }
}
int main()
{
    int n;cin>>n;
    
    OddMagicSquare(a,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}