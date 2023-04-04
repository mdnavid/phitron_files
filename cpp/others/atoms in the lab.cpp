#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long int a , k , x ;
    int cas ;

    cin >> cas ;

    while(cas--)
    {

        cin >> a >> k >> x ;

        x = x / a ;

        if((int)(log(x)/log(k))<0)cout << "0" << endl ;
        else cout << (int)(log(x)/log(k)) << endl ;

    }

}
