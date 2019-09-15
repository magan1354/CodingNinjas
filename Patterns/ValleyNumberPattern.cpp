#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int j=1;j<=2*(N-i);j++){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}

