int sum=0;
int sumOfDigits(int n) {
    // Write your code here
    if(n==0){
        return sum;
    }
    sum=sum+(n%10);
    return sumOfDigits(n/10);
}


