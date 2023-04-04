#include<bits/stdc++.h>

using namespace std ;

int a[109] ;
int n ;

int main()
{

    /*freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout) ;*/


    int cas, j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        int ans = 0 ;
        cin >> n ;

        for(int i=1 ; i<=n ; i++)
            cin >> a[i] ;

        for(int i=1 ; i<=n ; i++)
        {
            int number = i ;
            if(i!=a[i])
            {
                swap(a[i],a[a[i]]) ;
                ans++ ;
            }
        }

        cout << "Case " << j << ": " << ans << endl;

        j++ ;

    }

}
