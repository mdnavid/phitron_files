#include<bits/stdc++.h>
#define ll long long int
using namespace std ;


ll m[2][2] = {{1,1},{1,0}} , f[2][2] = {{1,1},{1,0}} ;

void multiply(ll f[2][2] , ll m[2][2])
{
    ll x = f[0][0]*m[0][0] + f[0][1]*m[1][0] ;
    ll y = f[0][0]*m[0][1] + f[0][1]*m[1][1] ;
    ll z = f[1][0]*m[0][0] + f[1][1]*m[1][0] ;
    ll w = f[1][0]*m[0][1] + f[1][1]*m[1][1] ;
    f[0][0] = x ;
    f[0][1] = y ;
    f[1][0] = z ;
    f[1][1] = w ;

}

void power(ll f[2][2], ll n)
{
    if(n==0||n==1)return ;
    power(f,n/2) ;
    multiply(f,f) ;
    if(n%2==1)multiply(f,m) ;
}


int main()
{

    ll n ;

    cin >> n ;

    power(f,n-1) ;

    cout << f[0][0] << endl ;

}
