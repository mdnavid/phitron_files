#include<bits/stdc++.h>

using namespace std ;

int main()
{

    map<int, int>mp ;
    vector<int>v ;

    int n, m = 0, number, ans = 0, store = 0, j = 1 , another = 0 ;

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {
        cin >> number ;
        mp[number] = j++ ;
    }

    for(int i=0 ; i<n ; i++)
    {

        cin >> number ;

        if(mp[number] > m)
        {
            ans = (mp[number]-store) ;
            another = another + (mp[number]-store) ;
            v.push_back(ans) ;
            store = another ;
            m = mp[number] ;
        }
        else
            v.push_back(0) ;

    }

    for(int i=0 ; i<v.size() ; i++)
    {
        if(i!=v.size()-1)cout << v[i] << " " ;
        else cout << v[i] << endl ;
    }

}
