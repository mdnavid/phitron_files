#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int cas , test = 1 ;

    cin >> cas ;

    while(test<=cas)
    {

        int n , current , high = 0 , low = 0 ;

        cin >> n >> current ;

        for(int i=1 ; i<n ; i++)
        {

            int a ;

            cin >> a ;

            if(a>current)high++ ;
            else if(a<current)low++ ;

            current = a ;

        }

        cout << "Case " << test << ": " << high << " " << low << endl ;

        test++ ;

    }

}
