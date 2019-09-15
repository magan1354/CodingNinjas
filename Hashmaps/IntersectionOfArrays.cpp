// input1 - first array
// input2 - second array
// size1 - size of first array
// size2 - size of second array
#include<unordered_map>
#include<cmath>
void intersection(int a[], int b[], int n, int m) {
        unordered_map<int,int> seen;
        if(n>=1 && n<=pow(10,6)){ 
            for(int i=0;i<n;i++){
                if(seen.count(a[i])>0){
                    seen[a[i]]++;
                }
                else{
                    seen[a[i]] = 1;
                }
            }
        }
        if(m>=1 && m<=pow(10,6)){ 
            for(int i=0;i<m;i++){
                if(seen[b[i]]>0){
                    cout<<b[i]<<endl;
                    seen[b[i]]--;
                }
            }
        }
}
