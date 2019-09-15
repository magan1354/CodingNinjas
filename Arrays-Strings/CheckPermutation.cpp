#include<string.h>
#include<iostream>
// input1 - first input string
using namespace std;// input2 - second input string
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int flag=0;
    int len1;
    len1= sizeof(input1);
    int len2;
    len2= sizeof(input2);
    if(len1==len2){
        for(int i=0;i<len1;i++){
            for(int j=0;j<len1;j++){
                if(input1[i]==input2[j]){
                    flag++;
                }
            }
        }
        if(flag==len1-1){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
    return true;
}
