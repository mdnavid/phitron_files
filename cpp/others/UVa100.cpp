#include<stdio.h>

int main()
{
    int a,b,c=1,x,i;
    scanf("%d",&x);
    while(x>0)
    {
        c=1;
        scanf("%d",&a);
            for(i=1;i<11;i++)
            {
                   printf("%d X %d = %d\n",a,i,a*i);
            }
        x--;
    }
}

