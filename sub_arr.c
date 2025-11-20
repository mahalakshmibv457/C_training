#include<stdio.h>
#include<stdlib.h>
int sub_arr(int arr[], int n)
{
    int sub=arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[5]={55,77,88,99,44};
    int n=5;
    printf("%d", sub_arr(arr, n));
}
