//Md. Navid Alam
#include<bits/stdc++.h>

using namespace std ;

int coins, dynamic[109][50009] ;
int arr[108] , ans , su ;

void Clear(int p, int q)
{
    for(int i=0 ; i<p ; i++)
    {
        for(int j=0 ; j<q ; j++)
            dynamic[i][j] = -1 ;
    }
}

int subset(int i, int sum)
{
    if(i>=coins)
    {
        ans = min(ans,abs(sum-(su-sum))) ;
        return dynamic[i][sum] = ans ;
    }
    if(dynamic[i][sum]!=-1)
        return dynamic[i][sum] ;
    int p1 = subset(i+1,sum) ;
    int p2 = subset(i+1,sum+arr[i]) ;

    return dynamic[i][sum] = min(p1,p2) ;
}

int main()
{

    int test ;

    scanf("%d",&test) ;

    while(test--)
    {

        scanf("%d",&coins) ;
        memset(arr,0,sizeof(arr)) ;
        su = 0 ;

        for(int i=0 ; i<coins ; i++)
        {
            scanf("%d",&arr[i]) ;
            su = su + arr[i] ;
        }
        memset(dynamic,-1,sizeof(dynamic)) ;
        ans = INT_MAX ;

        printf("%d\n",subset(0,0)) ;
    }
    return 0 ;
}
