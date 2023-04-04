#include<stdio.h>

int main()
{

    int  i = 0 , cas , j ;
    char a , b , s[1000] ;

    scanf("%d",&cas) ;

    while(cas--)
    {

        i = 1 ;
        j = 0 ;
        scanf("%c",&a) ;
        scanf("%c",&b) ;

        s[0] = a ;

        while(b!=10)
        {
            if(b!=a)
            {
                s[i] = b ;
                i++ ;
            }
            a = b ;
            scanf("%c",&b) ;
        }
        s[i] = '\0' ;
        printf("%s\n%d\n",s,strlen(s)) ;

    }

}
