#include<bits/stdc++.h>
#define EPS 0.0000001

using namespace std ;

double p, q, r, s, t, u ;

double value(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double bisection()
{
    double lower = 0.000000, higher = 1.000000, mid ;

    while(lower<higher)
    {
        mid = (lower+higher)/2 ;
        if(abs(higher-lower)<=EPS)
            return mid ;
        if(value(mid)>=0)
            lower = mid ;
        else
            higher = mid ;
    }
    return mid ;
}

int main()
{

    while(cin >> p >> q >> r >> s >> t >> u)
    {

        if(value(0)*value(1)>0)
            cout << "No solution" << endl ;
        else
        {
            double a = bisection() ;
            printf("%.4f\n",a);
        }

    }


}
