#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n, time ;

    cin >> n >> time ;

    int left = (240 - time) / 5*2 ;

    for(int i=n ; i>0 ; i--)
    {
        if(i*(i+1)<=left)
        {
            cout << i << endl ;
            return 0 ;
        }
    }
    cout << "0\n" ;
}
