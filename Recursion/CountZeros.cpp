int m=0;
int countZeros(int n) {
    // Write your code here
    if(n==0){
        return m;
    }
    if(n%10==0){
        m++;
    }
    return countZeros(n/10);
}


