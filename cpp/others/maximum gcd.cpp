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

    int  g, cas, a[100000], mx = 0, k ;
    char s ;

   scanf("%d",&cas) ;

    while(cas--)
    {
        mx = 0 ;
        int i = 0 ;

        while(1)
        {
           scanf("%d%c",&a[i],&s) ;

            if(s==10)
            {
                k = i+1 ;
                 break ;
            }
            i++ ;
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
