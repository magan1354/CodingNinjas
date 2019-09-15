#include<iostream>
using namespace std;


/*void printPattern(int n){
    int m=(2*n)-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==0 || i==m){
                cout<<n;
            }
            else{
                if(j==1 || j==m-1){
                    cout<<n-1;
                }
                else{
                    cout<<n-i
                }
            }
        }
        cout<<endl;
    }
}
*/
#define max 100

void print(int a[][max], int size)  
{ 
for (int i = 0; i < size; i++) { 
    for (int j = 0; j < size; j++) { 
    cout << a[i][j]<<" "; 
    } 
    cout << endl; 
} 
}
  
// function to compute pattern 
void printPattern(int n) { 
      
// Pattern Size 
int size = 2 * n - 1; 
int front = 0; 
int back = size - 1; 
int a[max][max]; 
while (n != 0)  
{ 
    for (int i = front; i <= back; i++) { 
    for (int j = front; j <= back; j++) { 
        if (i == front || i == back || 
            j == front || j == back) 
        a[i][j] = n; 
    } 
    } 
    ++front; 
    --back; 
    --n; 
} 
print(a, size); 
} 
  
