#include<stdio.h>

void main()
{
    int a[5],sum=0,i;
    printf("Enter 5 nummbers");
    for(i=0;i<5;i++)
{
     scanf("%d|n",&a[i]);
     sum=sum+a[i];
}

printf("the sum of given number is:%d|n",sum);

}