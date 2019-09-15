#include <bits/stdc++.h> 
using namespace std; 
  
// dp[i][j] is going to store true if sum j is 
// possible with array elements from 0 to i. 
bool** dp; 
  
void display(const vector<int>& v) 
{ 
    for (int i = v.size()-1; i >=0; i--) {
        if(i!=0)
            cout<<v[i]<<" ";
        if(i==0)
            cout<<v[i];
    }
    cout<<"\n"; 
} 
  
// A recursive function to print all subsets with the 
// help of dp[][]. Vector p[] stores current subset. 
void printSubsetsRec(int arr[], int i, int sum, vector<int>& p) 
{ 
    // If we reached end and sum is non-zero. We print 
    // p[] only if arr[0] is equal to sun OR dp[0][sum] 
    // is true. 
    if (i == 0 && sum != 0 && dp[0][sum]) 
    { 
        p.push_back(arr[i]); 
        display(p); 
        return; 
    } 
  
    // If sum becomes 0 
    if (i == 0 && sum == 0) 
    { 
        display(p); 
        return; 
    } 
  
    // If given sum can be achieved after ignoring 
    // current element. 
    if (dp[i-1][sum]) 
    { 
        // Create a new vector to store path 
        vector<int> b = p; 
        printSubsetsRec(arr, i-1, sum, b); 
    } 
  
    // If given sum can be achieved after considering 
    // current element. 
    if (sum >= arr[i] && dp[i-1][sum-arr[i]]) 
    { 
        p.push_back(arr[i]); 
        printSubsetsRec(arr, i-1, sum-arr[i], p); 
    } 
} 
  
// Prints all subsets of arr[0..n-1] with sum 0. 
void printSubsetSumToK(int arr[], int n, int sum) 
{ 
    if (n == 0 || sum < 0) 
       return; 
  
    // Sum 0 can always be achieved with 0 elements 
    dp = new bool*[n]; 
    for (int i=0; i<n; ++i) 
    { 
        dp[i] = new bool[sum + 1]; 
        dp[i][0] = true; 
    } 
  
    // Sum arr[0] can be achieved with single element 
    if (arr[0] <= sum) 
       dp[0][arr[0]] = true; 
  
    // Fill rest of the entries in dp[][] 
    for (int i = 1; i < n; ++i) 
        for (int j = 0; j < sum + 1; ++j) 
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] || 
                                       dp[i-1][j-arr[i]] 
                                     : dp[i - 1][j]; 
    if (dp[n-1][sum] == false) 
    { 
        cout<<"There are no subsets with sum"<<sum<<endl; 
        return; 
    } 
  
    // Now recursively traverse dp[][] to find all 
    // paths from dp[n-1][sum] 
    vector<int> p; 
    printSubsetsRec(arr, n-1, sum, p); 
} 