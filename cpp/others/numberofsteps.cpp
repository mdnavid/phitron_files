#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long cas ;

    cin  >> cas ;

    while(cas--)
    {

        long long x , y ;

        cin >> x >> y ;

        if(x==y)
        {
            if(x%2==0)cout << 4 + ((x/2)-1)*4 << endl ;
            else cout << 1 + (((x/2)+1)-1)*4 << endl ;
        }
        else if(x-2==y)
        {
            if(x%2==0)cout << x+y << endl ;
            else cout << (x+y)-1 << endl ;
        }
        else cout << "No Number" << endl ;

    }

}
