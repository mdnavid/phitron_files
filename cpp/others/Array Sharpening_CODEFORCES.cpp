#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        int n ;

        cin >> n ;

        int a[n], b[n] , c[n] , d[n] ;

        for(int i=0 ; i<n/2 ; i++)
            cin >> a[i] ;
        copy(a, a+(n/2), b);
        int j = 0 ;
        for(int i=(n/2)+1 ; i<n ; i++)
            cin >> b[j++] ;
        d = b ;
        for(int i=(n/2)-1 ; i>=0 ; i--)
        {
            if(a[i]>a[i+1] && a[i+1]!=0)
                a[i] = a[i+1] - 1 ;
        }
        sort(c,c+(n/2)) ;
        if(a!=c)
        {
            cout << 'NO\n' ;
            continue ;
        }
        else
        {
            for(int i=(n/2)+1 ; i>=0 ; i--)
            {
                if(a[i]<a[i-1] && a[i-1]!=0)
                    a[i] = a[i-1] - 1 ;
            }
        }
        if(b!=sort(b,b+(n-(n/2))))
        {
            cout << 'NO\n' ;
            continue ;
        }
        else
            cout << "YES\n" ;
    }

}
