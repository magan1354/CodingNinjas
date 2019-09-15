#include<vector>
#include<unordered_map>
#include<cmath>
void printPairs(int *a, int n, int k) {
	unordered_map<int,int> seen;
        if(n>=1 && n<=5000){ 
            for(int i=0;i<n;i++){
                if(seen.count(a[i])>0){
                    seen[a[i]]++;
                }
                else{
                    seen[a[i]] = 1;
                }
            }
            for(int i=0;i<n;i++){
                if(seen[a[i]+k]>0 && k>0){
                    for(int j=0;j<seen[a[i]+k];j++){
                        cout<<a[i]<<" "<<(a[i]+k)<<endl;
                    }
                }
                else if(seen[a[i]+k]>0 && k==0){
                    for(int j=i;j<seen[a[i]+k]-1;j++){
                        cout<<a[i]<<" "<<(a[i]+k)<<endl;
                    }
                }
            }
        }
}


