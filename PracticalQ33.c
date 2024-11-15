//Palindrome using recurssion
#include<stdio.h>
#include<string.h>
int isPalindrome(char str[], int start, int end)
{
    if(start>=end)
    {
        return 1;
    }
    if(str[start]!=str[end])
    {
        return 0;
    }
    return isPalindrome(str, start+1, end-1);
}
int main()
{
    char str[100];
    printf("enter a string: \n");
    scanf("%s", &str);
    int result=isPalindrome(str, 0, strlen(str)-1);
    if(result)
    {
        printf("%s is a palindrome\n", str);
    }
    else{
        printf("\"%s\" is not a palindrome\n", str);//for ""
    }
    return 0;
}
