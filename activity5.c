#include <stdio.h>
int main()
{
int num1, num2;
// Input the first number printf("Enter the first number: \n");
scanf("%d", &num1);
// Input the second number
printf("Enter the second number: \n");
scanf("%d", &num2);
// Increment num1 by 5 using +=
num1 += 5;
// Decrement num2 by 2 using -=
num2 -= 2;
// Output the results
printf("After incrementing the first number by 5: %d\n", num1);
printf("After decrementing the second number by 2: %d\n", num2);
return 0;
}