double H(int N) { 
   if (N == 1) return 1.0;
   return H(N) + 1.0/N; 
}
//ham khong tra ve gia tri do khong giam bien N