#include <stdio.h>
int main()
{
    int num1;
    printf("Enter the number:");
    scanf("%d", &num1);

    if (num1>0)
    {
        printf("The number is positive");
    }
    else if(num1==0)
    {
       printf("The number is neutral");
    }
    else
    {
        printf("The number is negative");
    }
    return 0;
}

    







