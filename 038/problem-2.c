/*
Question: Check if a matrix is symmetric.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int r,c,a[20][20],i,j,symmetric=1;
    if(scanf("%d %d",&r,&c)!=2 || r<1 || r!=c || r>20) return 1;
    for(i=0;i<r;i++) for(j=0;j<c;j++) if(scanf("%d",&a[i][j])!=1) return 1;
    for(i=0;i<r;i++) for(j=i+1;j<c;j++) if(a[i][j]!=a[j][i]) symmetric=0;
    puts(symmetric?"True":"False");
    return 0;
}
