#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n, number,b ,i = 1 ;

    cin >> n >> number ;

    map<int, int>mp ;

    int x[1000] ;

    for(int j=1 ; j<=n ; j++)
    {
        cin >> b ;

        if(mp[b]==0)
        {
            mp[b]++ ;
            x[i] = j ;
            i++;
        }
    }
    //cout << i << endl ;
    if(i>number)
    {
        cout << "YES" << endl ;
        for(int j = 1 ; j<=number ; j++)
            cout << x[j] << " " ;
        cout << endl ;
    }
    else cout << "NO" << endl ;

}
