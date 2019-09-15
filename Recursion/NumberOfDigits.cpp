int count(int n){
    if(n == 0){
        return 0;
    }
    return count(n/10)+1;
}