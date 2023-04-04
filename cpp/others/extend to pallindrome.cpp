#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s ;
    int now ;

    cin >> s ;

    map<char,int>mp ;

    for(int i=0 ; i<s.size() ; i++)
    {

        mp[s[i]] ++ ;

    }

    for(int i=s.size()-1 ; i>=0 ; i--)
    {

        if(mp[i]%2==1)now++ ;

    }

    if(now!=1)cout << s +

}
