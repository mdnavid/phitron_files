#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n, l = 0 ;

    string s ;

    cin >> n ;

    if(n%2==1)
    {
        for(int i=1 ; i<=(n/3)*3 ; i+=4)
        {
            if(l==0)
            {
                s = s + "bba" ;
                l = 1 ;
                continue ;
            }
            s = s + "c" ;
            if(l==1)
            {
                s = s + "bba" ;
                l = 0 ;
            }
            s = s + "c" ;
        }

        if(n%3==2)s = s + "ac" ;
        else s = s + "c" ;

        cout << s << endl ;
    }

    else if(n!=2&&n%2==0)
    {
        for(int i=1 ; i<=(n/3)*3 ; i+=4)
        {
            if(l==0)
            {
                s = s + "bba" ;
                l = 1 ;
                continue ;
            }
            s = s + "c" ;
            if(l==1)
            {
                s = s + "bba" ;
                l = 0 ;
            }
            s = s + "c" ;
        }

        if(n%3==2)s = s + "ac" ;
        else s = s + "c" ;

        cout << s << endl ;
    }

    if(n==2)cout << "aa" ;

}
