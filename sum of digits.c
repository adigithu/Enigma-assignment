#include<stdio.h>
void main()
{
    int num, rem, sum=0;
    clrscr();
    printf("Enter a number:");
    scanf("%d, &num");
    while (num!=0);
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("The sum of digits is %d", sum);
}