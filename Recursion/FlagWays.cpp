void helper(int N, char prev, char prevprev,long long &ans)
{
    if(N==1 && prevprev=='S')
    {
        ans=2;
        return;
    }
    if(N==1){
        ans++;
        return;
    }
    
    if(prevprev=='S'){
        helper(N-1,'W','B',ans);
        helper(N-1,'R','B',ans);
    }
    else if(prev=='B' && prevprev=='W'){
        helper(N-1,'R','B',ans);
    }
    else if(prev=='B' && prevprev=='R'){
        helper(N-1,'W','B',ans);
    }
    else if(prev=='W'){
        helper(N-1,'R','W',ans);
        helper(N-1,'B','W',ans);
    }
    else if(prev=='R'){
        helper(N-1,'W','R',ans);
        helper(N-1,'B','R',ans);
    }
}
long long find_Ways(int N){
    long long ans=0;
    helper(N,'B','S',ans);
    return ans;
}