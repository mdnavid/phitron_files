#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long double r1, r2, w1, w2 ;

    cin >> r1 >> r2 >> w1 >> w2 ;

    long double r = pow(((r1*r1)+(r2*r2)),0.50000000) ;
    long double w = pow(((w1*w1)+(w2*w2)),0.50000000) ;

    if(w>r)
        cout << "Russo" << endl ;
    else if(w<r)
        cout << "Wil" << endl ;
    else
        cout << "Empate" << endl ;

}
