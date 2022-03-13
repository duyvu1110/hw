/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

char hadamardMatrix[50][50];
void drawMatrix(int N,int xStart,int yStart);
void drawRevMatrix(int N,int xStart,int yStart);
void drawMatrix(int N,int xStart,int yStart){
    if(N==0){
        hadamardMatrix[xStart][yStart]='o';
        return;
    }
    int n=N/2;
    drawMatrix(n,xStart,yStart);
    drawMatrix(n,n+xStart,yStart);
    drawMatrix(n,xStart,n+yStart);
    drawRevMatrix(n,n+xStart,n+yStart);
}
void drawRevMatrix(int N,int xStart,int yStart){
    if(N==0){
        hadamardMatrix[xStart][yStart]='.';
        return;
    }
    int n=N/2;
    drawRevMatrix(n,xStart,yStart);
    drawRevMatrix(n,n+xStart,yStart);
    drawRevMatrix(n,xStart,n+yStart);
    drawMatrix(n,n+xStart,n+yStart);
}
void solveDrawMatrix(){
    int n;cin>>n;
    drawMatrix(pow(2,n),0,0);
    for(int i=0;i<pow(2,n);i++){
        for(int j=0;j<pow(2,n);j++){
            cout<<hadamardMatrix[i][j];
        }cout<<endl;
    }
}