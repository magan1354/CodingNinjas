void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Save the merged array in ans[] array passed as argument.
     * Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */
    int i = 0, j = 0, k = 0; 
  
    while (i<size1 && j <size2) 
    { 
        if (arr1[i] < arr2[j]) 
            ans[k++] = arr1[i++]; 
        else
            ans[k++] = arr2[j++]; 
    } 
   
    while (i < size1) 
        ans[k++] = arr1[i++]; 
   
    while (j < size2) 
        ans[k++] = arr2[j++]; 
}
