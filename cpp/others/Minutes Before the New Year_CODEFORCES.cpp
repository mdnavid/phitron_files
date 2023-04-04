#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        int h , m ;

        cin >> h >> m ;

        int rh = 23 - h ;
        int rm = 60 - m ;

        cout << (rh*60)+rm << endl ;

    }

}
