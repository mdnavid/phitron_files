#include<bits/stdc++.h>

using namespace std ;

int main()
{

    long long int n, dis, sum = 0 ;
    vector<long long int>v ;

    cin >> n ;

    dis = n ;

    for(int i=0 ; i<n ; i++)
    {
        long long int a ;
        cin >> a ;
        v.push_back(a) ;
    }
    sort(v.begin(),v.end()) ;

    for(int i=1 ; i<n ; i++)
    {
        sum += v[i-1] ;
        // cout << sum << endl ;
        if(sum>v[i])
        {
            dis-- ;
            sum -= v[i] ;
        }
    }
    cout << dis << endl ;

}
