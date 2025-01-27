#include <stdio.h>
#define PI 3.14159
int main()
{
float radius, area, circumference;
// Input radius from user
printf("Enter the radius of the circle:\n ");
scanf("%f", &radius);
// Calculate area and circumference
area = PI * radius * radius;
circumference = 2 * PI * radius;
// Output results
printf("For a circle with radius %.2f:\n", radius);
printf("Area = %.2f square units\n", area);
printf("Circumference = %.2f units\n", circumference);
return 0;
}