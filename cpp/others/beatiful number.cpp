#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int cas , j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        long long int l , n , x , y ;

        cin >> l >> n ;

        x = log2(l) + 1 ;
        y = log2(n) + 1 ;

        if(log2(l)==(int)log2(l)&&log2(n)==(int)log2(n))cout << "Case " << j << ": " << ((n-l)+1)-(y-x)-2 << endl ;
        else if(log2(l)==(int)log2(l)||log2(n)==(int)log2(n))cout << "Case " << j << ": " << ((n-l)+1)-(y-x)-1 << endl ;
        else if(log2(l)!=(int)log2(l)&&log2(n)!=(int)log2(n))cout << "Case " << j << ": " << ((n-l)+1)-(y-x) << endl ;

        j++ ;

    }

}
