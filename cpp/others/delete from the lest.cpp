#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string a , b ;

    cin >> a >> b ;

    int i = a.size() , j = b.size() ;

    while(a[--i]==b[--j]&&j>=0&&i>=0){}

    cout << i + j + 2 << endl ;

}
