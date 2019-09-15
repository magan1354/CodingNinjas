#include <iostream>
using namespace std;

// n - number of rows given
void printPattern(int n){
	if(n%2==1){
        for(int i=1;i<=(n+1)/2;i++){
            int k=n*2*(i-1)+1;
            for(int j=k;j<k+n;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        for(int l=(n-1)/2;l>=1;l--){
            int m=n*((2*l)-1)+1;
            for(int p=m;p<m+n;p++){
                cout<<p<<" ";
            }
            cout<<endl;
        }
    }
    if(n%2==0){
        for(int i=1;i<=n/2;i++){
            int k=n*2*(i-1)+1;
            for(int j=k;j<k+n;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        for(int l=n/2;l>=1;l--){
            int m=n*((2*l)-1)+1;
            for(int p=m;p<m+n;p++){
                cout<<p<<" ";
            }
            cout<<endl;
        }
    }
}

