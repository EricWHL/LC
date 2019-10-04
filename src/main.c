#include <stdio.h>
#include <math.h>
#include <malloc.h>

#include "twosum.h"

int main()
{
    printf("[%s:%d]\n", __FUNCTION__,__LINE__);

    int a[4] = {2,7,11,15};
    int* p;
    int *q;
    p = twoSum(a,4,26,q);
    printf("twosum:%d %d\n",p[0],p[1]);
    free(p);
    return 0;
}
