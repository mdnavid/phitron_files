#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;


long long int bigmod ( long long a, int p, int m );


int main()
{
    printf("input format...\n (a^p) MOD m\n");
    long long a;
    int p,m;
    printf("enter a : ");
    scanf("%lld",&a);
    printf("\n");
    printf("enter p : ");
    scanf("%d",&p);
    printf("\n");
    printf("enter m : ");
    scanf("%d",&m);
    printf("\n");




    printf("result is %d\n",bigmod(a,p,m));

    int hold;
    scanf("%lld",&hold);
    return 0;
}



//BIG MODE CODE...
long long int  bigmod ( long long a, int p, int m )
{
    if ( p == 0 )
        return 1;

    if ( p % 2 )
    {
        return (           ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else
    {
        long long c = bigmod ( a, p / 2, m );
        return ( (c%m) * (c%m) ) % m;
    }
}
