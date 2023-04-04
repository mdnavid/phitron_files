#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int k ;

    cin >> k ;

    if(k>36)
        cout << "-1" << endl ;
    else
    {
        if(k%2==0)
        {
            for(int i=0 ; i<(k/2) ; i++)
                cout << "8" ;
            cout << endl ;
        }
        else if(k%2==1)
        {
            for(int i=0 ; i<(k/2) ; i++)
                cout << "8" ;
            cout << "4" << endl ;
        }
    }

    return 0 ;

}
