#include <bits/stdc++.h>
using namespace std ;

map<long long int, long long int>mp1,mp2 ;
void  y(long long int r1 , long long int r2 )
{


    long long int i ;
    long long int j = r1 ;

    while(j<=r2)
    {

        for(i=1 ; i<j/2 ; i++)
        {

            if(j%i==0)mp1[j]++ ;

        }

        if(mp2[mp1[j]]==0)mp2[mp1[j]] = j ;
        j++ ;
    }


}

int main()
{


    long long int r1, r2 ;
    scanf("%lld%lld",&r1,&r2) ;
    y(r1,r2) ;
    long long int big = mp1[0] ;
    map<long long int, long long int> :: iterator it;

    for(it=mp1.begin(); it!=mp1.end(); it++)
    {

        cout << it->first << " " << it->second << endl;
    }
    for(it=mp2.begin(); it!=mp2.end(); it++)
    {

        cout << it->first << " " << it->second << endl;
    }


    //printf("%d\n",big) ;
    for(long long int i=r1 ; i<=r2 ; i++)
    {
        //printf("\t%d\t",mp11[i]+2) ;
        if(mp1[i]>big)
        {
            big = mp1[i] ;
        }

    }
    printf("%lld %lld\n",big+2,mp2[big])  ;

}

