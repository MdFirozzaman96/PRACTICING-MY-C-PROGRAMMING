#include<stdio.h>
int main()
{
    int i,x,y,sum=0;
    scanf("%d%d",&x,&y);

    if(x<y||x==y)
    {
        for(i=x;i<=y;i++)
        {
            if(i%13==0)
            {
                continue;
            }
            else
            {
               sum=sum+i;
            }
        }
    }
    else
    {
        for(i=y;i<=x;i++)
        {
            if(i%13==0)
            {
                continue;
            }
            else
            {
               sum=sum+i;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
