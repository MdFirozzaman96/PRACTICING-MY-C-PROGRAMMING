#include<stdio.h>
int main()
{
    int i,x,y;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        for(i=y+1;i<x;i++)
        {
            if(i%5==2||i%5==3)
            {
                printf("%d\n",i);
            }
        }
    }
    else if(y>x)
    {
        for(i=x+1;i<y;i++)
        {
            if(i%5==2||i%5==3)
            {
                printf("%d\n",i);
            }
        }
    }

    return 0;

}
