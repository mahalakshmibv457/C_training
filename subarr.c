// write a c function which will accept and array,its size as n,writtens the difference between first and last element
#include<stdio.h>
int subarr(int arr[],int n)
{#include <stdio.h>

int diffFirstLast(int arr[], int n) {
    if (n <= 0) {
        return 0;  // or handle error
    }
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = diffFirstLast(arr, n);
    printf("Difference = %d\n", result);

    return 0;
}

    int sub= arr[0]-arr[n-1];

return sub;
}
void main()
{
    int arr[3]={33,61,80};
    int n=3;
    printf("%d",  subarr(arr, n));
}
