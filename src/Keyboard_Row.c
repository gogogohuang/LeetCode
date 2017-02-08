/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** findWords(char** words, int wordsSize, int* returnSize) {
    
    char *first_row="qwertyuiop";
    char *sec_row="asdfghjkl";
    char *thr_row="zxcvbnm";
    int i, j, k, m=0;
    int row_hit=0;

    char **find = (char**) calloc(wordsSize, sizeof(char*));

    for ( i = 0; i < wordsSize; i++ ){
        find[i] = (char*) calloc(50, sizeof(char*));
    }
    
    for(i=0; i<wordsSize; i++){
        for(j=0; j<strlen(*(words+i)); j++){
            for(k=0; k<strlen(first_row); k++){
                if(tolower(*(*(words+i)+j)) == *(first_row+k)){
                    row_hit|=0x01;
                }
            }
            for(k=0; k<strlen(sec_row); k++){
                if(tolower(*(*(words+i)+j)) == *(sec_row+k)){
                    row_hit|=0x02;
                }
            }
            for(k=0; k<strlen(thr_row); k++){
                if(tolower(*(*(words+i)+j)) == *(thr_row+k)){
                    row_hit|=0x04;
                }
            }
        }
        if((row_hit==1)||(row_hit==2)||(row_hit==4)){
            strcpy(*(find+m), *(words+i));
            m++;
        }
        row_hit=0;
    }
    
    *returnSize=m;
    return find;
}