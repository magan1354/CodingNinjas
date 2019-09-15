#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
const int CHARS = 26; 
int makeAnagram(char str1[], char str2[]){
    // make hash array for both string and calculate 
    // frequency of each character 
    if(strlen(str1)>=1 && strlen(str1)<=pow(10,4) && strlen(str2)>=1 && strlen(str2)<=pow(10,4)){
        int count1[CHARS] = {0}, count2[CHARS] = {0}; 
  
    // count frequency of each character in first string 
        for (int i=0; str1[i]!='\0'; i++) 
            count1[str1[i]-'a']++; 
  
    // count frequency of each character in second string 
        for (int i=0; str2[i]!='\0'; i++) 
            count2[str2[i]-'a']++; 
  
    // traverse count arrays to find number of characters 
    // to be removed 
        int result = 0; 
        for (int i=0; i<26; i++) 
            result += abs(count1[i] - count2[i]); 
        return result; 
    }
    
}
