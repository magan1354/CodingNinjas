void findIndexes(int input[], int size, int x, int output[], int &k, int currIndex){
	if(currIndex==size){
		return;
	}
	if(input[currIndex]==x){
		output[k] = currIndex;
		k++;
	}
	findIndexes(input,size,x,output,k,++currIndex);
}

int allIndexes(int input[], int size, int x, int output[]){
	int k = 0;
	findIndexes(input,size,x,output,k,0);
	return k;
}
