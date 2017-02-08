/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    int i=0;
    
    char **find = (char**) calloc(n, sizeof(char*));

    for ( i = 0; i < n; i++ ){
        find[i] = (char*) calloc(8, sizeof(char*));
    }
    
    for(i=0; i<n; i++){
        if((i+1)%3==0){
            if((i+1)%5==0){
                strcpy(find[i], "FizzBuzz");
            }else{
                strcpy(find[i], "Fizz");
            }
        }else if((i+1)%5 == 0){
            strcpy(find[i], "Buzz");
        }else{
            sprintf(find[i], "%d", i+1);
        }
        
        /*
        if((i+1)%15 == 0){
            strcpy(find[i], "FizzBuzz");
        }else if((i+1)%5 == 0){
            strcpy(find[i], "Buzz");
        }else if((i+1)%3 == 0){
            strcpy(find[i], "Fizz");
        }else{
            sprintf(find[i], "%d", i+1);
        }*/
    }
    *returnSize = n;
    
    return find;
}