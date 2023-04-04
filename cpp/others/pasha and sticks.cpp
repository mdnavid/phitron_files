#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int a ;

    cin >> a ;

    if(a%2==1)
        cout << "0" << endl ;
    else
    {
        int u = a / 2 ;
        if(u%2==1)
        cout << u/2 << endl ;
        else
        cout << (u/2)-1 << endl ;
    }

}
