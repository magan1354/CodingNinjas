void removeConsecutiveDuplicates(char *input) {
    if(input[0]=='\0'){
        return;
    }
    else if(input[0]==input[1]){
        int i = 0;  
        while (input[i] != '\0') { 
            input[i] = input[i + 1]; 
            i++;
        } 
        removeConsecutiveDuplicates(input);
    }
    return removeConsecutiveDuplicates(input+1);
}