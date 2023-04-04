//Md. Navid Alam
#include<bits/stdc++.h>

using namespace std ;

int value[119] ;

int func(int total, int number)
{

    long long ans[10009] = {0} ;

    ans[0] = 1 ;

    for(int i=0 ; i<number ; i++)
    {
        //cout << value[i] << endl ;
        for(int j=1 ; j<=total ; j++)
        {
            if(j>=value[i])
                ans[j] = (ans[j] + ans[j-value[i]])%100000007 ;
        }
    }

    return ans[total] ;

}

int main()
{

    int cas , j = 1 ;

    cin >> cas ;

    while(cas--)
    {

        int n , k ;
        cin >> n >> k ;

        for(int i=0 ; i<n ; i++)
            cin >> value[i] ;

        sort(value,value+n) ;

        cout << "Case " << j++ << ": " << func(k,n) << endl ;

    }

}
