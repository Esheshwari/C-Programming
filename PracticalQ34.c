//power of N using recurssion:
#include<stdio.h>
int power(base, exponents)
{
  if(exponents==0)
  {
    return 1;
  }
  else{
    return base*power(base, exponents-1);
  }
}
int main()
{
    int base, exponents;
    printf("enter the base: ");
    scanf("%d", &base);
    printf("enter the exponent: ");
    scanf("%d", &exponents);
    int result=power(base, exponents);
    printf("%d raised to the power %d is: %d\n", base, exponents, result);
    return 0;
}
