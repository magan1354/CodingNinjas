#include<cmath>
#include<bits/stdc++.h>
int minCount(int n){
    if(n<=3){
        return n;
    }
    double m=sqrt(n);
    if(m-floor(m)==0){
        return 1;
    }
    
    int res = n;
    for (int x = 1; x <= n; x++) 
    { 
        int temp = x*x; 
        if (temp > n) 
            break; 
        else
            res =  min(res, 1+minCount(n - temp)); 
    } 
    return res; 
}
