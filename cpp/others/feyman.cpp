#include<stdio.h>

int main()
{

    int cas , n , r , i , v , pa , j , store , a , f ;

    scanf("%d",&cas) ;

    while(cas--)
    {

        v = 2 ;
        a = 1 ;

        scanf("%d%d",&n,&r) ;

        pa = r+1 ;
        store = n-r ;

        for(i=pa ; i<=n ; i++)
        {
            f = i ;
            if(f%v==0&&v<=store)
            {
                f = f/v ;
                v++ ;
            }
            a = a*f ;
        }
        printf("%d\n",a) ;
    }

}
