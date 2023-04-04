#include<bits/stdc++.h>

using namespace std ;

int main()
{

    double x1 , y1 , r1 , x2 , y2 , r2 , distance , sumofradius ;

    cin >> x1 >> y1 >> r1 >>  x2 >> y2 >> r2 ;

    distance = pow(((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)),0.5) ;

    if(distance==r1+r2)cout << "1" << endl ;
    else if(distance>r1+r2)cout << "0" << endl ;
    else if(distance==(r1+r2)-1)cout << "2" << endl ;
    else cout << "-1" << endl ;

}
