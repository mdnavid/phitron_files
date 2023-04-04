#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test , scenario , raymond , friends , k = 1 ;

    cin >> test ;

    while(k<=test)
    {

        cin >> raymond >> friends ;

        long long int sum = 0 ;
        vector<int>v ;

        for(int i=0 ; i<friends ; i++)
        {
            int a ;
            cin >> a ;
            sum = sum + a ;
            v.push_back(a) ;
        }

        if(sum<raymond)
            cout << "Scenario #" << k << ":" << endl << "impossible" << endl << endl << endl ;
        else
        {
            sort(v.begin(),v.end()) ;
            reverse(v.begin(),v.end()) ;
            sum = 0 ;
            for(int i=0 ; i<v.size() ; i++)
            {
                sum = sum + v[i] ;
                if(sum>=raymond)
                    {
                                    cout << "Scenario #" << k << ":" << endl << i+1 << endl << endl << endl ;
                        break ;
                    }
            }
        }
        k++ ;
    }

    return 0 ;

}
