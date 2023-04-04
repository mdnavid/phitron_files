#include<stdio.h>

int main()
{

    int number , cas ;

    scanf("%d",&cas) ;

    while(cas--)
    {

        scanf("%d",&number) ;

        reverse(number) ;

    }

}

int reverse(int x)
{

    int z=0 , y=0 , num = 0 ;

    while(x!=0)
    {
        y=x%10;
        x=x/10;
        z=z*10+y;
    }
    printf("%d",z);
   //printf("%d",num) ;

}
