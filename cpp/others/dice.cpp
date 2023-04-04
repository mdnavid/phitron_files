#include<bits/stdc++.h>

using namespace std ;

double a[100009] ;

void need()
{

    a[1] = 1.0 ;

    for(int i=2 ; i<100009 ; i++)a[i] = a[i-1] + (1.0/i) ;

}

int main()
{

    need() ;

    int cas , j = 1 , number ;

    cin >> cas ;

    while(j<=cas)
    {
        cin >> number ;
        printf("Case %d: %0.6lf\n",j,(double)number*a[number]) ;
        j++ ;
    }

}
