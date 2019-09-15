#include<string>
#include<bits/stdc++.h>
void printIlsRecur (char *str1, char *str2, char *iStr, int m,  int n, int i)  
{  
    
    if (m == 0 && n == 0)  
        cout << iStr << endl ;  
    
    if (m != 0)  
    {  
        iStr[i] = str1[0];  
        printIlsRecur (str1 + 1, str2, iStr, m - 1, n, i + 1);  
    }  
  
    
    if (n != 0)  
    {  
        iStr[i] = str2[0];  
        printIlsRecur(str1, str2 + 1, iStr, m, n - 1, i + 1);  
    }  
}  
  

void interleaving (char* first, char* second)  
{  
    // allocate memory for the output string
    int m= strlen(first);
    int n= strlen(second);
    
    char *iStr= new char[((m + n + 1)*sizeof(char))];  
      
    // Set the terminator for the output string  
    iStr[m + n] = '\0';  
      
    // print all interleavings using printIlsRecur()  
    printIlsRecur (first, second, iStr, m, n, 0);  
      
    // free memory to avoid memory leak  
    free(iStr);  
}  

