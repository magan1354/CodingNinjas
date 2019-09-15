long fact(long n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

long numberOfNumbersWithDuplicates(long num){
	int z=0;
    long temp= num;
    while(temp!=0){
        z++;
        temp/=10;
    }
    if(z==0 || z==1){
        return 0;
    }
    int* input = new int[z];
    long temp2=num;
    for(int i=0;i<z;i++){
        input[i]=temp2%10;
        temp2/10;
    }
    
    return 
    
    
}