#include<stdio.h>
#include<string.h>
void main()
{
    char name[15]="mahalakshmi";
    chat new[100]="hello";
    printf("%c\n", name[10]);//access
    printf("length of string is %d\n", strlen(name));
    strcat(new,name); // new=hello mahalakshmi
    printf("%s", new);
}