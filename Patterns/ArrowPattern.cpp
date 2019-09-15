#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    for(int i=1;i<=(N+1)/2;i++){
        for(int j=i-1;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=(N-1)/2;i>0;i--){
        for(int j=i-1;j>0;j--){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}


