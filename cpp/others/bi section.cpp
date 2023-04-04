#include<bits/stdc++.h>

using namespace std ;

double bisection(double a, double b, double c)
{

    double lower =0.0, mid, higher = min(a,b), tem, p, q ;

    while(lower<higher)
    {
        mid = (lower+higher) / 2 ;
        p = sqrt(b*b-mid*mid) ;
        q = sqrt(a*a-mid*mid) ;
        tem = (p*q)/(p+q) ;

        if(abs(c-tem)<=0.0000001)
            return mid ;
        else if(c>tem)
            higher = mid ;
        else
            lower = mid ;
    }

    return mid ;

}

int main()
{

    double a, b, c, ans ;
    int i = 1, cas ;

    cin >> cas ;


    while(i<=cas)
    {

        cin >> a >> b >> c ;

        ans = bisection(a,b,c) ;

        printf("Case %d: %0.6lf\n",i,ans) ;

        i++ ;

    }

}

