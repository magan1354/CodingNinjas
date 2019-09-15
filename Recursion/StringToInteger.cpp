#include<bits/stdc++.h>
#include<cmath>
int num=0;
int stringToNumber(char input[]) {


    if (input[0] != '\0') {

        if (input[0]<'0' || input[0]>'9') {
            return 0;
        }

        else {
            num *= 10;
            num += input[0] - '0';

            //don't bother using a 'for' loop because recursion is already sort-of a for loop

            stringToNumber(input+1);
        }
    }
    return num;
}
