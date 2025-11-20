 #include<stdio.h>
void swap(float *B1 , float *B2)
{
    printf("before hacking: a has %fb has %f", *B1,*B2);
    float temp=0;
    *B1=*B2;
    *B2=temp;
   printf("after hacking: a has %fb has %f", *B1,*B2);
}
void main()
{
    float B1,B2;
    printf("enter B1,B2:");
    scanf("%f%f", &B1, &B2);
    swap(&B1, &B2);
}