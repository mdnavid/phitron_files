#include<bits/stdc++.h>

#define Max 1000000

using namespace std ;

vector<char>v ;

void store()
{
    string s ;

    for(int i=1 ; i<Max ; i++)
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

    store() ;

    int query ;

    while(cin >> query)
    {

        cout << v[query-1] << endl ;

    }


}
