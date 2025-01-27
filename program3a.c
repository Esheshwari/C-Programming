#include <stdio.h>
int main()
{
int x, y;
printf("Enter Value of x\n");
scanf("%d", &x);
printf("Enter Value of y\n");
scanf("%d", &y);
// Using a temporary variable to swap the values
// Store the value of x in a temporary variable
int temp = x;
// Assign the value of y to x
x = y;
// Assign the value stored in the temporary variable to y
y = temp;
printf("After Swapping, the value of x = %d and y = %d", x, y);
return 0;
}