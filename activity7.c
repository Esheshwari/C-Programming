#include <stdio.h>
int main()
{
int num;
// Input a number
printf("Enter an integer:\n ");
scanf("%d", &num);
// Check if the number is even or odd
if (num % 2 == 0)
{
printf("%d is even.\n", num);
} else
{
printf("%d is odd.\n", num);
}
return 0;
}