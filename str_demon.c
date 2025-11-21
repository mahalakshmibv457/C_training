#include<stdio.h>
#include<string.h>
void main()
{
    char name[15]="mahalakshmi";
    char new[100]="hello";
    printf("%c\n", name[10]);//access
    printf("length of string is %d\n", strlen(name));
    strcat(new,name); // new=hello mahalakshmi
    printf("%s\n", new);
    printf("%d", strstr(new, "H"));
}