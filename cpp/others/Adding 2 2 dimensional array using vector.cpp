#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n ;

    cin >> n ;


    vector<int>v[n] , v1[n] , sum[n] ;

    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            int a ;
            cin >> a ;
            v[i].push_back(a) ;
        }
    }
    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            int a ;
            cin >> a ;
            v1[i].push_back(a) ;
        }
    }


    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            sum[i].push_back(v[i][j]+v1[i][j]) ;
        }
    }

    for(int i=0 ; i<2 ; i++)
    {
        for(int j=0 ; j<2 ; j++)
        {
            cout << sum[i][j] << " " ;
        }
        printf("\n") ;
    }


}
