#include <stdio.h>
int main()
{
float length, width, area;
printf("Enter length of the rectangle:\n ");
scanf("%f", &length);
printf("Enter width of the rectangle:\n ");
scanf("%f", &width);
// Calculate area
area = length * width;
// Output
printf("Area of the rectangle: %.2f\n", area);
return 0;
}