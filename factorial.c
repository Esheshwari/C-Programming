#include<stdio.h>
int main()
{
    int num1,i,fact;

fact=1;
 printf("enter a number for which a factorial should be found \n");
 scanf("%d", &num1);
i=num1;
 while(i>0)
 {
    fact=fact*i;
    i--;
 }
 printf("Factorial of %d is %d\n", num1, fact);
 return 0;
}