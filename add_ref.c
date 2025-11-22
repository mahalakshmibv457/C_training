#include<stdio.h>

void sum_ref(int a, int b, int c)
{
    int sum=a+b+c;
    printf("%d", sum);
}
void sum_value(int *a, int *b, int *c)
{
    int sum=*a+*b+*c;
    printf("%d", sum);
}
void main()
{
    int a=90;
    int b=80;
    int c=80;
    sum_ref(a,b,c);
    sum_value(&a,&b,&c);
}
