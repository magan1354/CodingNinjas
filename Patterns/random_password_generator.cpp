#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=N-i;j>0;j--){
            cout<<" ";
        }
        for(int k=i;k<=(2*i)-1;k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
