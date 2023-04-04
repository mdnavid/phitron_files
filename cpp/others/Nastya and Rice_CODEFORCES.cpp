#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    scanf("%d",&test) ;

    while(test--)
    {

        int n , a , b , c , d ;

        scanf("%d%d%d%d%d",&n,&a,&b,&c,&d) ;

        if(((n*(a-b))>=c-d && (n*(a-b))<=c+d) || ((n*(a+b))>=c-d && (n*(a+b))<=c+d))
            printf("Yes\n") ;
        else
            printf("No\n") ;

    }

}
