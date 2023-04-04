#include<bits/stdc++.h>

using namespace std ;

int main()
{

   set<int>s ;

    s.insert(8) ;

    for(auto it=s.begin() ; it!=s.end() ; it++)
    {
        cout << *it << endl ;
    }

    s.erase(s.begin()) ;

    //LIFO ;


}

