#include<bits/stdc++.h>

using namespace std ;

int main()
{

    vector<pair<int , int> >v ;

    for(int i=0 ; i<3 ; i++)
    {

        int a , b ;

        cin >> a >> b ;

        v.push_back(make_pair(a,b)) ;

    }

    sort(v.begin(),v.end()) ;

    for(int i=0 ; i<3 ; i++)cout << v[i].first << " " << v[i].second << endl ;

}
