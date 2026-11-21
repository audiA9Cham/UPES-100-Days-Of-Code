/*
Question: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

int main(void) {
    int a,b; char op;
    if(scanf("%d %d %c",&a,&b,&op)!=3) return 1;
    switch(op) {
        case '+': printf("%d\n",a+b); break;
        case '-': printf("%d\n",a-b); break;
        case '*': printf("%d\n",a*b); break;
        case '/': if(b==0) puts("Division by zero is not allowed"); else printf("%d\n",a/b); break;
        case '%': if(b==0) puts("Division by zero is not allowed"); else printf("%d\n",a%b); break;
        default: puts("Invalid operator");
    }
    return 0;
}
