#include <iostream>
#include <string>
using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    if(num==0){
        output[0]="";
        return 1;
    }
    else{
        string smallOutput[500];
        int smallCount= keypad(num/10, smallOutput);
        int rem=num%10;
        string op = options[rem];
        int len = op.length();
        int count=0;
        for (int i = 0; i < len; i++) {
            for(int j=0; j< smallCount;j++){
		        output[count]=smallOutput[j]+op[i];
                count++;
            }
	    }
        return count;
    }
}

void printKeypad(int num){
    string output[100000];
    int d=keypad(num,output);
    for(int i=0;i<d;i++){
        cout<<output[i]<<endl;
    }
}
