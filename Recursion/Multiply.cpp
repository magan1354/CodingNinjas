int result=0;
int multiplyNumbers(int m, int n) {
    // Write your code here
    if(n==0){
        return result;
    }
    result=result+m;
    return multiplyNumbers(m,n-1);
}


