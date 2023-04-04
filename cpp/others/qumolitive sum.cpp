#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n ;

    cin >> n ;

    int a[n] , sum[n+2] ;

    sum[0] = 0 ;

    for(int i=1 ; i<=n ; i++)
    {

        int b ;

        cin >> b ;

        sum[i] = sum[i-1] + b ;

    }

    int querry , x , y ;

    cin >> querry ;

    for(int i=0 ; i<querry ; i++)
    {

        cin >> x >> y ;

        cout << sum[y] - sum[x-1] << endl ;

    }

}
