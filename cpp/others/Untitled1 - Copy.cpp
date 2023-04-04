#include<stdio.h>

int main()
{
    int a,b,i,k,j;
    scanf("%d",&a);
    while(a>0)
    {
        scanf("%d",&b);
        for(i=b; i>0; i--)
        {
            for(j=1; j<=b; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        
    }
}


