#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n , index1 = 0 , index2 = 0 , cn = 0 ;
    string s ;

    cin >> n >> s ;

    index1 = s.find("RU") ;
    index2 = s.find("UR") ;

    while(index1!=-1||index2!=-1)
    {
        if(index1!=-1)
            s.replace(index1,2,"d") ;
        if(index2!=-1)
            s.replace(index2,2,"d") ;
        index1 = s.find("RU",index1+2) ;
        index2 = s.find("RU",index2+2) ;

    }
    cout << s.size() << endl ;
}
