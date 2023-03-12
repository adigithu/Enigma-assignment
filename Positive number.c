#include<stdio.h>
void main()
{
    int n;
    clrscr();
    print("Enter a number:");
    scanf("%d, &n");
    if (n>0)
    printf("%d is a positive number", n);
    else if (n<0)
    printf("%d is a negative number", n);
    else if (n==0);
    printf("%d is zero", n)
}