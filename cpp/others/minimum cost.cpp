#include<stdio.h>

int main()
{
    int a,d,c,e,b,f=0,h=0,g[20][20];
    scanf("%d",&a);
    for(b=0; b<a; b++)
    {
        for(c=0; c<a; c++)
        {
            scanf("%d",&g[b][c]);
            if(b==c)
                f=f+g[b][c];
            if((b+c)==(a-1))
                h=h+g[b][c];
        }
    }
    printf("%d\n",f);
    printf("%d\n",h);
}
