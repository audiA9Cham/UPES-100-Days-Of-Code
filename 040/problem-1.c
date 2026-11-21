/*
Question: Perform diagonal traversal of a matrix.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int r,c,a[20][20],s,low,high,i,j;
    if(scanf("%d %d",&r,&c)!=2 || r<1 || c<1 || r>20 || c>20) return 1;
    for(i=0;i<r;i++) for(j=0;j<c;j++) if(scanf("%d",&a[i][j])!=1) return 1;
    for(s=0;s<r+c-1;s++) {
        low=s-(c-1); if(low<0) low=0;
        high=s; if(high>r-1) high=r-1;
        if(s%2==0) for(i=high;i>=low;i--) printf("%d ",a[i][s-i]);
        else for(i=low;i<=high;i++) printf("%d ",a[i][s-i]);
    }
    putchar('\n');
    return 0;
}
