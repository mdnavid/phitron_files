#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n ;

    cin >> n ;

    for(int i=0 ; i<4 ; i++)
    {
        n = n<<1 ;
        cout << n << endl ;
    }

    cout << n ;

}
