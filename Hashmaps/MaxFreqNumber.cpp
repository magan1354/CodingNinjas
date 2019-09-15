#include<vector>
#include<unordered_map>
#include<cmath>
	int highestFrequency(int *a, int n){	 
		unordered_map<int,int> seen;
        while(n>=1 && n<=pow(10,5)){ 
            for(int i=0;i<n;i++){
                if(seen.count(a[i])>0){
                    seen[a[i]]++;
                }
                else{
                    seen[a[i]] = 1;
                }
            }
        
            int s=seen.size();
            int max=seen[a[0]];
            for(int i=1;i<n;i++){
                if(seen[a[i]]>max){
                    max=seen[a[i]];
                }
            }
        
            for(int i=0;i<n;i++){
                if(seen[a[i]]==max){
                    return a[i];
                }
            }
        }
    }

