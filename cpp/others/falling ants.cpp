#include<bits/stdc++.h>

using namespace std ;

bool compare(const pair<int,int> &a, const pair<int,int> &b)
{
    if( a.second == b.second )
    {
            return a.first < b.first ;
    }
    else
        return a.second < b.second ;
}

int main()
{

    int t ;

    while(cin >> t && t!=0)
    {

        vector< pair<int,int> >v ;
        for(int i=0 ; i<t ; i++)
        {
            int a, b, c ;
            cin >> a >> b >> c ;
            v.push_back(make_pair((a*b*c),c)) ;
        }

        sort(v.begin(),v.end(), compare) ;

        cout << v[v.size()-1].first << endl ;

    }

}
