int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if(size<1){
        return -1;
    }
    else if(input[size-1]==x){
        return size-1;
    }
    return lastIndex(input,size-1,x);

}
