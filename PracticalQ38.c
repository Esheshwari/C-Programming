//GCD using recurssions
#include<stdio.h>
int gcd(n1, n2);
int main()
{
    int n1, n2;
    printf("enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d", n1, n2, gcd(n1, n2));
    return 0;
}
int gcd(n1, n2)
{
    if(n2!=0)
    return gcd(n2, n1%n2);
    else {
        return n1;
    }
}
