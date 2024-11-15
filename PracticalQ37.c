//LCM of 2 numbers using recurssions:
#include<stdio.h>
int gcd(a,b)
{
    if(b==0)
    {
        return a;
    }
     return gcd(b, a%b);
}
    int lcm(a,b)
    {
        return(a*b)/gcd (a,b);
    }
int main()
{
    int a, b;
    printf("enter the number: ");
    scanf("%d %d", &a, &b);
    int result = lcm(a,b);
    printf("lcm of %d and %d is: %d\n", a, b, result);
    return 0;
}
