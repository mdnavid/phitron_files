#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int a ;

    cin >> a ;

    if(a<5000)
        cout << "something\n" ;
    else if (a>=5000 && a<10000)
        cout << "Levis Bag\n" ;
    else if (a>=10000 && a <=20000)
        cout << "Gucci Bag\n" ;
    else
        cout << "Gucci Bag\nGucci Belt\n" ;

    return 0 ;

}