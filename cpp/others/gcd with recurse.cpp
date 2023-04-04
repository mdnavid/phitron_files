#include<bits/stdc++.h>

using namespace std ;

int gcd(int a,int b)
{

    if(b==0)
        return a ;
    else
        return gcd(b,a%b) ;

}

int main()
{

    int  g, cas, a[101], mx = 0, k ;
    char s ;

    cin >> cas ;

    while(cas--)
    {
        mx = 0 ;

        for(int i=0 ; i<101 ; i++)
        {
            cin >> a[i] >> s ;
            cout << (int)s << endl ;

            if((int)s==10)
            {
                k = i ;
                 break ;
            }
        }
        for(int i=0 ; i<k ; i++)
        {
            for(int j=i+1 ; j<k ; j++)
            {
                g = gcd(a[i],a[j]) ;
                mx = max(mx,g) ;
            }
        }

        printf("%d\n",mx) ;
    }


}
