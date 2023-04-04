#include<stdio.h>

int main()
{

    int length , width , mod , cas , area , tlength ;

    scanf("%d",&cas) ;

    while(cas--)
    {

        scanf("%d%d",&length,&width) ;
        area = length * width ;

        while(length%width != 0)
        {

            mod = length % width ;
            length = width ;
            width = mod ;

        }

        tlength = width ;
        printf("%d",tlength) ;
        tlength = tlength * tlength ;

        printf(" %d\n",area/tlength) ;

    }

}
