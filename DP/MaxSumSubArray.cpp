#include<iostream> 
#include<climits> 

int findSum(int a[],int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Don't print output and return the output.
     * Taking input and printing output is handled automatically.
     */
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
    

}
 
    

