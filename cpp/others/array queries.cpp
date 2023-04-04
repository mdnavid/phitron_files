#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n , q ;

    cin >> n >> q ;

    vector<int>v[101] ;
    map<int,int>mp ;

    for(int i=1 ; i<=n ; i++)
    {
        int a ;
        cin >> a ;
        v[a].push_back(i) ;
        mp[a]++ ;
    }

    for(int i=0 ; i<q ; i++)
    {
        int a , b , c , flag = 1 ;
        cin >> a >> b >> c ;
        for(int j=1 ; j<=c ; j++)
        {
            int u = lower_bound(v[j].begin(),v[j].end(),a) - v[j].begin() ;
            if(v[j][u] < a || v[j][u] > b||mp[j]==0)
            {
                flag = 0 ;
                break ;
            }
        }
        if(flag)
            cout << "Yes" << endl ;
        else cout << "No" << endl ;
    }

}
