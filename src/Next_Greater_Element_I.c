/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* findNums, int findNumsSize, int* nums, int numsSize, int* returnSize) {
    int i, j, k;
    *returnSize=findNumsSize;
    int *resultNums = malloc(findNumsSize*sizeof(int));
    memset(resultNums, -1, sizeof(int)*findNumsSize);
    int maxInnums=0;
    
    for(i=0; i<findNumsSize; i++){
        for(j=0; j<numsSize; j++){
            if(*(findNums+i) == *(nums+j)){
                maxInnums = *(findNums+i);
                for(k=j+1; k<numsSize; k++){
                    if(maxInnums < *(nums+k)){
                        maxInnums = *(nums+k);
                        *(resultNums+i) = maxInnums;
                        break;
                    }
                }
            }
        }
    }
    
    return resultNums;
}