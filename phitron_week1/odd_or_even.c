#include<stdio.h>

int main()
{

    int a , b ;

    scanf("%d %d",&a,&b) ;

    if(a%2==0)
        printf("%d is even\n",a) ;
    else
        printf("%d is odd\n",a) ;

    if(b%2==0)
        printf("%d is even\n",b) ;
    else
        printf("%d is odd\n",b) ;

}