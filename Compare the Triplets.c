#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int a[3],b[3],i,j,ali_pt=0,bob_pt=0;

    for(i=0; i<3; i++)
    {
        scanf("%d",&a[i]);
    }

    for(j=0; j<3; j++)
    {
        scanf("%d",&b[j]);
    }

    for(i=0,j=0; i<3,j<3; i++,j++)
    {
        if (a[i]>b[j])
            ali_pt++;
        else if (a[i]<b[j])
            bob_pt++;
        else
            continue;
    }

    printf("%d %d",ali_pt,bob_pt);
    
    printf("\n");

    return 0;
}
