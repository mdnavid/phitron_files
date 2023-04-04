#include<bits/stdc++.h>
#include<cstdio>

using namespace std ;

int main()
{

    string s ;

    cin >> s ;

    strlwr(s) ;

    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')s.erase(s.begin()+i) ;
        else
        {
            s.resize(s.size()+1) ;
            s.insert(s.begin(),".") ;
        }

    }

    cout << s << endl ;

}
