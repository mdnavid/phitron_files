#include<bits/stdc++.h>

using namespace std;

int main()
{

    int cas, j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        int  n ,q ;
        cin >> n >> q ;

        vector<int>v ;

        for(int i=0 ; i<n ; i++)
        {
            int a ;
            cin >> a ;
            v.push_back(a) ;
        }
        //cout << "Case " << j << ":" << endl ;
        sort(v.begin(),v.end()) ;

        for(int i=0 ; i<q ; i++)
        {
            int a, b ;
            cin >> a >> b ;
            int idup = *lower_bound(v.begin(),v.end(),a); /*- v.begin()/* ;**/
            int idlow = *lower_bound(v.begin(),v.end(),b); /*- v.begin() ;*/
            cout << idup << " " << idlow << endl ;
            cout << idlow-idup << endl ;
        }

        j++ ;

    }

}
