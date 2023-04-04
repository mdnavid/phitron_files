#include <bits/stdc++.h>
using namespace std ;

#define Max 1000005

bool a[Max] ;

void sieve()
{

    a[0]=a[1]=0;

    for(int i=4; i<=Max; i=i+2)
        a[i]=0;
    for(int i=3; i*i<=Max; i+=1)
    {
        if(a[i])
        {
            for(int j=i*i; j<=Max; j+=i)
                a[j] = 0;
        }
    }
}

int main()
{

    for(int i=0; i<=Max; i++)
        a[i]=1;
    sieve() ;
    string s, target ;

    while(cin >> s)
    {

        int n, ron ;
        stringstream ss(s) ;
        ss >> n ;

        string target( s.rbegin(), s.rend() );

        stringstream oo(target) ;
        oo >> ron ;
  //  cout << n << " " << ron << endl ;
        if(a[n]==0)
            cout << n << " is not prime." << endl ;
        else if(n==ron||a[ron]==0)
            cout << n << " is prime." << endl ;
        else if(a[ron]==1)
            cout << n << " is emirp." << endl ;

    }

}
