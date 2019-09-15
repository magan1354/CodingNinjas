// Change in the given string itself. So no need to return or print anything
#include<string>
#include<bits/stdc++.h>
using namespace std;

void replacePi(char input[]) {
	// Write your code here
    if(strlen(input)<=1){
        return;
    }
    replacePi(input+1);
    if(input[0]=='p' && input[1]=='i'){
        int len=strlen(input);
        input[len+2]= '\0';
        for(int i=len-1;i>=2;i--){
            input[i+2]=input[i];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }
}


