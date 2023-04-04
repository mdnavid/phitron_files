#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n , k = 0 ;

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {

        int number ;

        cin >> number ;

        if(number==1)k = 1 ;

    }

    if(k==0)cout << "EASY" << endl ;
    else cout << "HARD" << endl ;

}
