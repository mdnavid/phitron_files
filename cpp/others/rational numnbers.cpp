#include<stdio.h>

int main()
{

    int index , row , cas ;

    scanf("%d",&cas) ;

    while(cas--)
    {
        printf("ENTER ROW & INDEX :- \n") ;

        scanf("%d%d",&row,&index) ;

        if(index>row*3) printf("INVALID INDEX NUMBER\n") ;
        else if(index%3==1) printf("NUMBER ON THE INDEX = 2\n") ;
        else printf("NUMBER ON THE INDEX = 1\n") ;
    }

}
