#include<bits/stdc++.h>

using namespace std ;

string str(string s)
{

    transform(s.begin(),s.end(),s.begin(),::toupper(int)) ;

    sort(s.begin(),s.end()) ;

    return s ;

}


int main()
{

    string s1 , s2 ;

    getline(cin,s1) ;
    //getchar() ;
    getline(cin,s2) ;

    s1.erase(remove(s1.begin(),s1.end(),' '),s1.end()) ;
    s2.erase(remove(s2.begin(),s2.end(),' '),s2.end()) ;

    s1 = str(s1) ;
    s2 = str(s2) ;

    if(s1==s2)cout << "possible" << endl ;
    else cout << "imossible" << endl ;

}
