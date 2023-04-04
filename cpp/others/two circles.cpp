#include<bits/stdc++.h>

using namespace std ;

int main()
{

    double x1 , x2 , y1 , y2 , r1 , r2 , dis ;

    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2 ;

    dis = pow((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1),0.5) ;

    if(x1==x2&&y1==y2)
    {
        if(r1==r2)cout << "-1" << endl ;
        else cout << "0" << endl ;
        return 0 ;
    }
    if(r2>r1)swap(r2,r1) ;
    if(dis==r1+r2||dis==r1-r2)cout << "1" << endl ;
    else if(dis>r1+r2||dis+r2<r1)cout << "0" << endl ;
    else cout << "2" << endl ;

}
