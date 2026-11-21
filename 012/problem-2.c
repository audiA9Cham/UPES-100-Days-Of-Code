/*
Question: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int u; double bill=0;
    if(scanf("%d",&u)!=1 || u<0) return 1;
    if(u>300) { bill+=(u-300)*12; u=300; }
    if(u>200) { bill+=(u-200)*10; u=200; }
    if(u>100) { bill+=(u-100)*7; u=100; }
    bill+=u*5;
    printf("Bill: ₹%.0f\n",bill);
    return 0;
}
