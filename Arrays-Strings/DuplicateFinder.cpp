// arr - input array
// size - size of array

int MissingNumber(int arr[], int size){
    int sum=0;
    int sum2=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    for(int i=0;i<size-1;i++){
        sum2=sum2+i;
    }
    int c;
    c=sum-sum2;
    return c;
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    

}
