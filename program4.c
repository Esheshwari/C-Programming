#include <stdio.h>
int main()
{
int num1, num2, num3;
// Input three numbers from user
printf("Enter three numbers:\n ");
scanf("%d %d %d", &num1, &num2, &num3);
// Assume num1 is the largest initially
int largest = num1;
// Check if num2 is larger than current largest
if (num2 > largest)
{
largest = num2;
}
// Check if num3 is larger than current largest
if (num3 > largest)
{
largest = num3;
}
// Print the largest number
printf("The largest number is: %d\n", largest);
return 0;
}