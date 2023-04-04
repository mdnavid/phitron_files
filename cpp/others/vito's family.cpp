#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int cas , numberofrealtives , arr[1000];


    cin >> cas ;

    while(cas--)
    {

        cin >> numberofrealtives ;

        for(int i=0 ; i<numberofrealtives ; i++)
        {
            cin >> arr[i] ;
        }
        sort(arr,arr+numberofrealtives) ;
        int x , k , l = 0 ;

        x = numberofrealtives / 2 ;

        if(numberofrealtives%2==0)k = (arr[x-1]+arr[x])/2 ;
        else k = arr[x] ;

        for(int i=0 ; i<numberofrealtives ; i++)
        {
            l  = l + abs(arr[i]-k) ;
        }
        cout << l << endl ;
    }

}
