#include<bits/stdc++.h>
#include<unordered_set>
#include<cmath>
bool subArrayZeroSum(int arr[], int n) {
    unordered_set<int> sumSet; 
  
    // Traverse through array and store prefix sums 
    if(n>=1 && n<=pow(10,5)){
        int sum = 0; 
        for (int i = 0 ; i < n ; i++){ 
            sum += arr[i]; 
  
        // If prefix sum is 0 or it is already present 
            if (sum == 0 || sumSet.find(sum) != sumSet.end()) 
                return true; 
            sumSet.insert(sum); 
        } 
        return false;
    }
}

