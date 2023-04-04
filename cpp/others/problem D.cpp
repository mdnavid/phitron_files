#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n, sum = 0, limit, noz = 0, flag = 0 , f , l ;

    cin >> n ;

    f = 0 ;
    l = n ;

    int a[n] ;

    for(int i=0 ; i<n ; i++)
    {

        cin >> a[i] ;
        sum = sum + a[i] ;
        if(a[i]!=0&&f==0)
        {
            f = i ;
            flag = 1 ;
        }
        if(f&&a[i]!=0)l = i ;

    }

    limit = sum / 3 ;

    for(int i=f ; i<=l ; i++)
    {
        if(a[i]==0)noz++ ;
    }

    if((sum/3.0)==sum/3)cout << noz + 1 << endl ;
    else cout << "0" << endl ;

}

