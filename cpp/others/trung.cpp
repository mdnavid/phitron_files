#include<vector>
#include<map>
#include<string.h>
#include<sstream>
#include<iostream>

using namespace std ;

vector<char>v ;

void store(int n)
{
    string s ;

    for(int i=1 ; i<=n ; i++)
    {

        ostringstream ss ;

        ss << i ;

        s = ss.str() ;

        for(int j=0 ; j<s.size() ; j++)
        {
            v.push_back(s[j]) ;
        }

    }


}
int main()
{
    int n, cas ;

    cin >> cas ;

    while(cas--)
    {
        cin >> n ;
        store(n) ;
        int k = 0 ;
        map<char,int>mp ;
        for(char i='0' ; i<='9' ; i++)
            mp[i] ;

        for(int i = 0 ; i<v.size() ; i++)
            mp[v[i]]++ ;
        v.clear() ;
        map<char,int> :: iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            cout << it->second ;
            if(k!=mp.size())cout << " " ;
            k++ ;
        }
        cout << endl ;
    }

}
