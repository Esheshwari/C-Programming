#include<stdio.h>
int main() {
    int limit, factorial;
    printf("Enter a limit to find factorials up to that number:\n");
    scanf("%d", &limit);

   
    printf("Factorials from 1 to %d:\n", limit);
    
    for (int i = 1; i <= limit; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) 
        {
        factorial*= j;
        }
        printf("%d! = %d\n", i, factorial);
    }

    return 0;
}