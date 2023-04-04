#include<bits/stdc++.h>

using namespace std ;

int main()
{

    map<int,int>mp ;
    vector<int>v ;

    int number ;
    char c ;

    while(scanf("%d%c",&number,&c))
    {

        if(mp[number]==0)v.push_back(number) ;

        mp[number] ++ ;

        if(c==10)break ;

    }

    for(int i=0 ; i<v.size() ; i++)cout << v[i] << " " << mp[v[i]] << endl ;

}
