//Largest Array Element using rec
#include<stdio.h>
int findLargest(int arr[], int n)
{
    if(n==1)
    {
        return arr[0];
    }
    int max=findLargest(arr, n-1);
    if(arr[n-1]>max)
    {
         return (arr[n-1]);
    }
    else{
        return max;
    }
}
int main()
{
    int n;
    printf("enter the number of elements of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest=findLargest(arr, n);
    printf("The largest element in array is: %d\n", largest);
    return 0;
}
