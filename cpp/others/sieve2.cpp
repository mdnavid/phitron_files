#include <bits/stdc++.h>
using namespace std ;

#define Max 100000

bool a[1000000];

void sieve()
{

    a[0]=a[1]=0;

    for(int i=4; i<=Max; i=i+2) a[i]=0;
    for(int i=3; i*i<=Max; i+=1)
    {
        if(a[i])for(int j=i*i; j<=Max; j+=i)a[j] = 0;
    }
}
int main()
{

    int cas,c,b;
    for(int i=0; i<=Max; i++)a[i]=1;

    sieve();

    cin >> cas ;

    while(cas--)
    {

        cin >> c >> b ;

        for(int i=c; i<=b; i++)
        {
            if(a[i])cout << i << endl ;
        }

        cout << endl ;

    }
}

