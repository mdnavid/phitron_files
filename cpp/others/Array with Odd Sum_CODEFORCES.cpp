#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        int n, cntodd = 0, cnteven = 0 ;

        cin >> n ;

        int a[n] ;

        for(int i=0 ; i<n ; i++)
        {
            cin >> a[i] ;
            if(a[i]%2==1)
                cntodd++ ;
            else
                cnteven++ ;
        }

        if(cntodd>0 && cnteven>0)
            cout << "YES\n" ;
        else if(cntodd==0)
            cout << "NO\n" ;
        else if(cntodd%2==1)
            cout << "YES\n" ;
        else if(cntodd%2==0)
            cout << "NO\n" ;

    }

}
