#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;

    map<char, int>mp ;

    while(cin >> s)
    {

        for(int i=0 ; i<s.size() ; i++)
        {
            mp[s[i]]++ ;
        }

        cout << mp.size() << endl ;

        for(char i='a' ; i<='z' ; i++ )
        {
            if(mp[i]>0)cout << i << " " << mp[i] << endl ;
        }
        mp.clear() ;
}
}
