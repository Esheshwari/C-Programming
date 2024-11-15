//factorial using recurssion
#include<stdio.h>
int factrec(n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return n*factrec(n-1);
    }  
}
int main()
{
   int n;
    printf("enter the n:");
    scanf("%d", &n);
    int result=factrec(n);
    printf("factorial is: %d", result);
    return 0;
}
