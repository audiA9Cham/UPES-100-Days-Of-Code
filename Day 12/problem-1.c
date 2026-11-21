/*
Question: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int d,fine=0;
    if(scanf("%d",&d)!=1 || d<0) return 1;
    if(d>30) puts("Membership Cancelled");
    else {
        fine+=(d<5?d:5)*2;
        if(d>5) fine+=(d<10?d-5:5)*4;
        if(d>10) fine+=(d-10)*6;
        printf("Fine ₹%d\n",fine);
    }
    return 0;
}
