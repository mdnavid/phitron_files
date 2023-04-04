#include<bits/stdc++.h>

using namespace std ;

string s ;

void recurse(int n)
{

    if(n==0)return ;
    else recurse(n/2) ;
    char t = (n%2) + 48 ;
    s = s + t ;

}

int main()
{

    int n ;

    cin >> n ;

    recurse(n) ;
    cout << s << endl ;

    s = bitset<128>(n).to_string() ;

    cout << s << endl ;

}
