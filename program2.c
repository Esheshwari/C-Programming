#include <stdio.h>
int main()
{
int num1, num2;
int sum, difference, product, modulus;
float quotient;
// Input two numbers from the user
printf("Enter any two numbers: ");
scanf("%d %d", &num1, &num2);
// Perform arithmetic operations
sum = num1 + num2;
difference = num1 - num2;
product = num1 * num2;
quotient = (float)num1 / num2; // Typecast to float for accurate division
modulus = num1 % num2;
// Print results
printf("SUM = %d\n", sum);
printf("DIFFERENCE = %d\n", difference);
printf("PRODUCT = %d\n", product);
printf("QUOTIENT = %.2f\n", quotient); // Display quotient with 2 decimal places
printf("MODULUS = %d\n", modulus);
return 0;
}