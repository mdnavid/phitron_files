#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test , j = 0 ;

    cin >> test ;

    while(j<test)
    {

        if(j!=0)
            cout << endl ;

        int height , number , k = 1;

        cin >> height >> number ;

        while(k<=number)
        {
            for(int i=1 ; i<=height ; i++)
            {
                for(int j=1 ; j<=i ; j++ )
                    cout << i ;
                cout<< endl ;
            }
            for(int i=height-1 ; i>=1 ; i--)
            {
                for(int j=1 ; j<=i ; j++ )
                    cout << i ;
                cout<< endl ;
            }
            if(k!=number)
                cout << endl ;
            k++ ;
        }
        j++ ;
    }

}
