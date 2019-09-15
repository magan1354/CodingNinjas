#include<cmath>
double sum=0;
double geometricSum(int k) {
    // Write your code here
    if(k==0){
        return sum+1;
    }
    else{
        sum=sum+pow(2,(-1*k));
        return geometricSum(k-1);
    }
}


