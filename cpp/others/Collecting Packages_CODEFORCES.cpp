#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        int n, inx = 0, iny = 0 , flag = 1 , last = -8000 ;
        string s = "" ;

        map<int,int>mp ;
        vector<int>v[1009] ;

        cin >> n ;

        for(int i=0 ; i<n ; i++)
        {
            int a, b ;
            cin >> a >> b ;
            v[a].push_back(b) ;
            mp[a] ;
        }
        map<int,int> :: iterator it ;

        for(it=mp.begin() ; it!=mp.end() ; it++)
        {
            int p = it->first ;
            for(int i=inx ; i<p ; i++)
                s = s + "R" ;
            inx = p ;

            sort(v[p].begin(),v[p].end()) ;

            if(last !=-8000 && v[p][0]<v[last][v[last].size()-1])
            {
                flag = 0 ;
                cout << "NO\n" ;
                break ;
            }

            for(int i=0 ; i<v[p].size() ; i++)
            {
                for(int j=iny+1 ; j<=v[p][i] ; j++)
                    s = s + "U" ;
                iny = v[p][i] ;
            }
            last = p ;
        }
        if(flag)
            cout << "YES\n" << s << endl ;
    }

}
