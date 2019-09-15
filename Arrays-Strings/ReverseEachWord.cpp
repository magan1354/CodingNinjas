#include <bits/stdc++.h> 
#include<string.h>
#include<iostream>
using namespace std; 
void reverseEachWord(char str[]) 
{    
    int j=0,m=0,size=0,k=0;
    stack<char> st;
    while(str[k]!=NULL){
        size++;
        k++;
    }
    for (int i = 0; i < size; ++i) { 
        if (str[i] != ' ') {
            st.push(str[i]);
        }
        if(str[i]==' ') {
            j=i;
            while (st.empty() == false) { 
                str[m]=st.top(); 
                st.pop();
                m++;
                if(m==j){
                    m++;
                }
            } 
        } 
    }  
    while (st.empty() == false) { 
        str[m]=st.top(); 
        st.pop();
        m++;
    }
}
    
