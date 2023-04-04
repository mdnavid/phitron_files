#include<bits/stdc++.h>

using namespace std ;

vector<long long int>v ;

void storing_fact()
{

    long long int fact = 1 ;

    for(int j=1 ; j<=20 ; j++)
    {
        fact = fact*j ;
        v.push_back(fact) ;
    }


}

int main()
{

    storing_fact() ;

    int cas, j = 1 ;

    cin >> cas ;

    getchar() ;

    while(j<=cas)
    {

        map<char,int>mp ;

        long long int ans, pa = 1 ;
        string s ;
        int siz = 0 ;
        char c ;

        cin >> s ;

        for(int i=0 ; i<s.size() ; i++)
            mp[s[i]]++ ;

        ans = v[s.size()-1] ;

        map<char,int> :: iterator it ;

        for(it=mp.begin() ; it!=mp.end() ; it++)
        {
            pa = pa * v[it->second - 1 ] ;
        }

        cout << "Data set " << j << ": " << ans / pa  << endl ;;

        j++ ;

    }

}
