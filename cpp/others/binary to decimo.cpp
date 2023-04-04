#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;
    int number = 0 , j = 0 ;

    //cout << (1<<2) << endl ;

    cin >> s ;

    for(int i=s.size()-1 ; i>=0 ; i--)
    {

        int n ;

        n = s[i] - 48 ;

        number = number + (n * (1<<j)) ;

        j++ ;
    }

    cout << number << endl ;

    long long numbr = bitset<64>(s).to_ulong() ;

    cout << numbr << endl;

}
