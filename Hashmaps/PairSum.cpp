 	#include<unordered_map>
    #include<cmath>
	void PairSum(int *a, int n) {	 
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
            for(int i=0;i<n;i++){
                if(a[i]<0){
                    for(int j=0;j<seen[a[i]*(-1)];j++){
                        cout<<a[i]<<" "<<(a[i]*(-1))<<endl;
                    }
                }
            }
        }
    }


