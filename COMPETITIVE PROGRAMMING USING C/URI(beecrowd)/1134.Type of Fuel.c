#include<stdio.h>
int main()
{
    int x,A=0,G=0,D=0,k=0;
    while(k==0)
    {
        scanf("%d",&x);
        if(x==1)
        {
           A++;
        }
        else if(x==2)
        {
            G++;
        }
        else if(x==3)
        {
            D++;
        }
        else if(x==4)
        {
            k=1;
        }
        else
        {
            k=0;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",A);
    printf("Gasolina: %d\n",G);
    printf("Diesel: %d\n",D);

    return 0;
}
