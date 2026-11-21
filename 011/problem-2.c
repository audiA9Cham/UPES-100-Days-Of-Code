/*
Question: Write a program to find profit or loss percentage given cost price and selling price.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    double cp,sp,pct;
    if(scanf("%lf %lf",&cp,&sp)!=2 || cp<=0) return 1;
    if(sp>cp) { pct=(sp-cp)*100/cp; printf("Profit %.0f%%\n",pct); }
    else if(sp<cp) { pct=(cp-sp)*100/cp; printf("Loss %.0f%%\n",pct); }
    else puts("No Profit No Loss");
    return 0;
}
