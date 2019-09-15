void rotate(int **mat, int n){
    int mat2[n][n];
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Taking input and printing output is handled automatically.
     */
    for (int x = 0; x < n/2; x++) 
    { 
        // Consider elements in group of 4 in  
        // current square 
        for (int y = x; y < n-x-1; y++) 
        { 
            // store current cell in temp variable 
            int temp = mat[x][y]; 
  
            // move values from right to top 
            mat[x][y] = mat[y][n-1-x]; 
  
            // move values from bottom to right 
            mat[y][n-1-x] = mat[n-1-x][n-1-y]; 
  
            // move values from left to bottom 
            mat[n-1-x][n-1-y] = mat[n-1-y][x]; 
  
            // assign temp to left 
            mat[n-1-y][x] = temp; 
        } 
    } 
}
