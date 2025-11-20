// write a function which will accept two input parameters x,y and returns (x+y)(x+y)
#include<stdio.h>
int square(int x,int y)
{
  int sqrt= x*x+y*y;
  return sqrt;
}
void main()
    {
        int x=4;
        int y=5;
        printf("%d\n", square(x,y));
    }
