//Program to reverse a String
#include<stdio.h>
#include<string.h>
void reverseString(char str[])
{
    int n=strlen(str);
    for(int i=0; i<n/2; i++)
    {
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
}
int main()
{
    char str[100];
    printf("enter a string: ");
    scanf("%s", str);
   reverseString(str);
   printf("reversed string:%s\n", str);
   return 0;
}