void replaceCharacter(char input[], char c1, char c2) {
    if(input[0]=='\0'){
        return;
    }
    else if(input[0]==c1){
        input[0]=c2;
    }
    return replaceCharacter(input+1,c1,c2);
    
}