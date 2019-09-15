#include <iostream>
#include <cassert>
#define startValue 1
using namespace std;

void PrintLexicographicOrder(int number, int endValue)
{ 
     if(number >= startValue && number <= endValue)
         cout<<number<<endl;
     int nextNumber = number * 10;
     if(nextNumber == 0 || nextNumber > endValue)
           return;
     
      for(int i = 0; i < 10; i ++)
     {
         PrintLexicographicOrder(nextNumber+i, endValue);
     }
}

void lexicographicalOrder(int n){
    if(n==0 || n==1){
        cout<<n;
        return;
    }

    for(int i=0; i<=9; i++)
        PrintLexicographicOrder(i,n);
    
}



