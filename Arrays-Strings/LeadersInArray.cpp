void Leaders(int* arr,int n)
{
	/* Don't write main().
	 * Don't read input, it is passed as function argument.
	 * Print your output exactly in the same format as shown. 
	 * Don't print any extra line.
	*/
for (int i = 0; i <n; i++) 
    { 
        int j; 
        for (j = i+1; j <n; j++) 
        { 
            if (arr[i] < arr[j]) 
                break; 
        }     
        if (j == n) // the loop didn't break 
            cout << arr[i] << " "; 
  } 
}
