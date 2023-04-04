#include<stdio.h>

int main()
{

    int n , r , cas , fact, ans , i ;

    scanf("%d",&cas) ;

    while(cas--)
    {
        ans = 1 ;
        scanf("%d%d",&n,&r) ;

        for(i = (n-r+1) ; i<=n ; i++)
        {
            ans = ans*i ;
        }
        printf("%d\n",ans) ;
    }

}
