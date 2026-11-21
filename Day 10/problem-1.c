/*
Question: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int a,b,c;
    if(scanf("%d %d %d",&a,&b,&c)!=3) return 1;
    if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a) printf("Invalid triangle\n");
    else if(a==b&&b==c) printf("Equilateral\n");
    else if(a==b||b==c||a==c) printf("Isosceles\n");
    else printf("Scalene\n");
    return 0;
}
