// Program to display a number if user enters negative number

// If user enters positive number, that number won't be displayed
#include <stdio.h>

int main()

{

int number;

printf("Enter an integer: ");

scanf("%d", &number);

// Test expression is true if number is less than 0

if (number < 0)

{

printf("You entered %d.\n", number);

}

printf("The if statement is easy.");

return 0;

}