#include<bits/stdc++.h>

using namespace std ;

int main()
{

    double a , b , c , s , area ;
    int cas ;

    cin >> cas ;

    while(cas--)
    {

        cin >> a >> b >> c ;

        if(a+b>c&&a+c>b&&b+c>a)
        {
            s = (a+b+c)/2 ;
            area = sqrt(s * (s-a) * (s-b) * (s-c)) ;
            printf("%0.2lf\n",area) ;
        }
        else cout << "Oh, No!" << endl ;

    }

}
