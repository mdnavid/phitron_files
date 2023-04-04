#include <bits/stdc++.h>
using namespace std ;

int main()
{

    int siz , input , i ;
    char c ;

    map<char , int>mp ;
    while(scanf("%c",&c)==1&&c!=10)
    {


        mp[c]++ ;

    }

    map<char,int> :: iterator it;

    for(it=mp.begin(); it!=mp.end(); it++)
    {

        cout << it->first << " " << it->second << endl;
    }

}

