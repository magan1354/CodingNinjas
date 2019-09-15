#include <cmath>
#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int minDistance(int a[],int n){
    int min=0,m=0,min_old=0;
    if(n>=1 && n<=pow(10,6)){
        for(int i=0;i<n;i++){
            m=a[i];
            for(int j=i+1;j<n;j++){
                if(a[j]==m){
                    min_old=j-i;
                    break;
                }
            }
            if(min==0){
                min=min_old;
            }
            else if(min>min_old){
                min=min_old;
            }
        }
    }
    return min;
}
