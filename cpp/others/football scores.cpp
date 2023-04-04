#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int x, y, cas ;

    cin >> cas ;

    while(cas--)
    {

        cin >> x >> y ;

        if(y<=x)
        {
            int a, b ;

            a = ((x+y)/2) ;
            b = x - a ;
            
            if(a+b==x&&abs(a-b)==y)
            {
            	if(a>=b)cout << a << " " << b << endl ;
            else cout << b << " " << a << endl ;
            }
            
            else cout << "impossible" << endl ;

            

        }
        else cout << "impossible" << endl ;

        }

    }

