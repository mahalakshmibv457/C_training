#include<stdio.h>
void main()
{
    int arr[4][2]={ {212,783}, {891,904}, {512,667}, {678,987} };
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    
    }
}