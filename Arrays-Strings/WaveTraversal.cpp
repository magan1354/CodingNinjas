#include <iostream>
using namespace std;

void wavePrint(int input[][1000], int row, int col){
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Print output and don't return it.
	* Taking input is handled automatically.
	*/
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++){
                cout<<input[i][j];
                cout<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<input[i][j];
                cout<<" ";
            }
        }
    }
}

