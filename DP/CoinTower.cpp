bool findWinner(int x, int y, int n) 
{ 
    // To store results 
    int dp[n + 1]; 
  
    // Initial values 
    dp[0] = false; 
    dp[1] = true; 
  
    // Computing other values. 
    for (int i = 2; i <= n; i++) { 
  
        // If A losses any of i-1 or i-x 
        // or i-y game then he will 
        // definitely win game i 
        if (i - 1 >= 0 and !dp[i - 1]) 
            dp[i] = true; 
        else if (i - x >= 0 and !dp[i - x]) 
            dp[i] = true; 
        else if (i - y >= 0 and !dp[i - y]) 
            dp[i] = true; 
  
        // Else A loses game. 
        else
            dp[i] = false; 
    } 
  
    // If dp[n] is true then A will 
    // game otherwise  he losses 
    return dp[n]; 
} 
string solve(int n, int x, int y)
{    
    string s;
	if (findWinner(x, y, n)) 
        s="Beerus"; 
    else
        s="Whis"; // Write your code here .
    return s;
}
