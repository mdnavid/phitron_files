#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int a = 2 , b = 1 , i = 3 , f , term ;

    vector<pair<int, int> >v ;

    v.push_back(make_pair(1,1)) ;
    v.push_back(make_pair(1,2)) ;
    v.push_back(make_pair(2,1)) ;

    while(i<=10000000)
    {

        if(b==1)
        {
            v.push_back(make_pair(a++,b)) ;
            f = 0 ;
        }
        else if(a==1)
        {
            v.push_back(make_pair(a,b++)) ;
            f = 1 ;
        }
        if(f==0)v.push_back(make_pair(a--,b++)) ;
        else if(f==1)v.push_back(make_pair(a++,b--)) ;

        i++ ;

    }
    while(cin >> term)
    {
        if(term<=3) cout << "TERM " << term << " IS " << v[term-1].first << "/" << v[term-1].second << endl ;
        else cout << "TERM " << term << " IS " << v[term].first << "/" << v[term].second << endl ;
    }

}
