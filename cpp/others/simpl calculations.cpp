#include<bits/stdc++.h>

using namespace std ;

int main()
{

    /*freopen("input.txt","r",stdin) ;
    freopen("outpt.txt","w",stdout) ;*/

    int t , j = 0 ;

    cin >> t ;

    while(j<t)
    {
        if(j) cout<<endl;
        int i ;
        double a0 , an1 , ci ;

        cin >> i >> a0 >> an1 >> ci ;

        printf("%0.2f\n",(a0+an1)/2-ci) ;

        j++ ;

    }

}
