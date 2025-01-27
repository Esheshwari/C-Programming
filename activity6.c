#include <stdio.h>
int main()
{
int num1, num2;
int largest;
// Input the first number
printf("Enter the first number:\n ");
scanf("%d", &num1);
// Input the second number
printf("Enter the second number:\n ");
scanf("%d", &num2);
// Calculate the largest number
if (num1 > num2)
{
printf("The largest number is: %d\n", num1);
}
else
{
printf("The largest number is: %d\n", num2);
}
return 0;
}