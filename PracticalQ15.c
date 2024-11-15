//Program to find Factorial of number
#include<stdio.h>
int Factorial(int n);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int fact= Factorial(n);
    return 0;
}
int Factorial(int n)
{
    int fact=1;
    for(int i=1; i<= n; i++)
    {
        fact=fact*i;
    }
     printf("The factorial is:%d",fact);
    return fact;
}
