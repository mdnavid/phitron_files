#include<bits/stdc++.h>

using namespace std;

int main()
{

    int cas, j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        int  n ,q ;
        scanf("%d%d",&n,&q) ;

        vector<int>v ;

       // v.push_back(0) ;
        for(int i=0 ; i<n ; i++)
        {
            int a ;
            scanf("%d",&a) ;
            v.push_back(a) ;
        }
        printf("Case %d:\n",j) ;
        sort(v.begin(),v.end()) ;

        for(int i=0 ; i<q ; i++)
        {
            int a, b ;
            scanf("%d%d",&a,&b) ;
            int idup = upper_bound(v.begin(),v.end(),a-1) - v.begin() ;
            int idlow = upper_bound(v.begin(),v.end(),b) - v.begin() ;
            //cout << idup << " " << idlow << endl ;
            printf("%d\n",idlow-idup) ;
        }

        j++ ;

    }

}
