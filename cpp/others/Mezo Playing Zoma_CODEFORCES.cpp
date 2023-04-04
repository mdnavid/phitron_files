#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n , cntr = 0 , cntl = 0 ;
    string s ;

    cin >> n >> s ;

    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='R')
            cntr++ ;
        else
            cntl++ ;
    }

    cout << cntl+cntr+1 << endl ;

}
