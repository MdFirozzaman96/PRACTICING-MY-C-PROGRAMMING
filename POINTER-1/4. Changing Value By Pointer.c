#include<stdio.h>
int main()
{
    int x;
    int *p;
    x = 10;
    p = &x;
    printf("Value of x is : %d\n",x);
    *p = 20;
    printf("Value of x is : %d\n",x);
    printf("Address of x is : %p\n",&x);
    printf("Value of p is : %p\n",p);
    return 0;
}
