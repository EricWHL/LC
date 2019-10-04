
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* ret = (int*)malloc(2*sizeof(int));
    
    int f = 0;
    int e = 1;
    
    if(NULL == ret) {
        return NULL;
    }
    
    while(f < numsSize ) {
        while (e < numsSize) {
            if(target == nums[f] + nums[e]) {
                ret[0] = f;
                ret[1] = e;
                returnSize[0] = 2;
                return ret;
            }
            else {
                e++;
            }
        }
        f++;
        e = f+1;
    }
    return NULL;
}
