int power(int x, int n) {
    if(n==0){
        return 1;
    }
    if(x>=1 && x<=30){
        if(n>=0 && n<=30){
            return x*power(x,n-1);
        }
    }
}
