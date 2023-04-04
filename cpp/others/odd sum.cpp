#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int range1, range2, cas, j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        cin >> range1 >> range2 ;

        int sum = 0 ;

        for(int i=range1 ; i<=range2 ; i++)
        {
            if(i%2==1)sum = sum + i ;
        }

        cout << "Case " << j << ": " << sum << endl ;

        j++ ;

    }

}
