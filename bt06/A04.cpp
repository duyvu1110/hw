double H(int N) { 
   if (N == 1) return 0.0;
   return H(N-1) + 1.0/N; 
}
// voi gia tri N rat lon thi se xay ra loi runtime