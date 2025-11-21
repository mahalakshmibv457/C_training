// create a structure with three variables name of the car , maximum speed and price    
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    char speed[100];
    int price;
};
void main()
{
    int n;
    printf("enter number of car:");
    scanf("%d", &n);
    struct car b[n];
    for (int i=0; i<n; i++)
    {
        printf("enter name of the car:");
        scanf("%s", b[i].name);

        printf("enter speed of the car:");
        scanf("%s", b[i].speed);

        printf("enter price of the car:");
        scanf("%d", &b[i].price);

    }

}
