// arr - input array
// n - size of array
#include<iostream>
using namespace std;

void PushZeroesEnd(int arr[], int n){
    int arr2[n];
    int m=0,k=0;
/*    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
    }
*/
    while(m<n && k<n){
        if(arr[m]!=0){
            arr2[k]=arr[m];
            k++;
        }
        m++;
    }
    
    if(k<n-1){
        for(int j=k;j<n;j++){
            arr2[j]=0;
        }
    }
    
    for(int i=0;i<n;i++){
        arr[i]=arr2[i];
    }
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to return or print the output.
     * Taking input and printing output is handled automatically.
     */
}