//sum of n numbers using recursions
#include<stdio.h>
int sum_of_num(n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n + sum_of_num(n-1);
    }
}
int main()
{
    int n;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int result=sum_of_num(n);
    printf("sum of first %d number is: %d\n", n, result);
    return 0;
}
