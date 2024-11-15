//1.Adding Two Numbers using recurssion
#include<stdio.h>
int sum_of_num()
{
    int a, b, sum;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    sum=a+b;
    return sum;
}
int main()
{
    int result = sum_of_num();
    if(result>0)
    {
        printf("result is: %d\n", result);
    }
    else{
        printf("invalid");
    }
    return 0;
}
