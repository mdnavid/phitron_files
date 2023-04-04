#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    scanf("%d",&test) ;

    while(test--)
    {
        long long int floors, state, closed ;
        map<long long int,bool>mp ;

        scanf("%lld%lld%lld",&floors,&state,&closed) ;

        long long int a ;

        for(int i=0 ; i<closed ; i++)
        {
            scanf("%lld",&a) ;
            mp[a] = 1 ;
        }
        if(mp[state]==0)
            printf("0\n") ;
        else
        {
            long long int index = 1 ;
            while(state+index<=floors || state-index>0)
            {
                if(state+index<=floors && mp[state+index]==0)
                {
                    printf("%d\n",index) ;
                    break ;
                }
                else if(state-index>0 && mp[state-index]==0)
                {
                    printf("%d\n",index) ;
                    break ;
                }
                index++ ;
            }
        }
    }
}


