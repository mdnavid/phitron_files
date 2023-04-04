#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;
    int flag = 0 ;

    cin >> s ;

    int ab = s.find("AB") , ba = s.find("BA") ;

    if(ab!=-1||ba!=-1)
    {
        if(s.find("BA",ab+2)!=-1)flag = 1 ;
        if(s.find("AB",ba+2)!=-1)flag = 1 ;
    }

    if(flag==1)cout << "YES" << endl ;
    else cout << "NO" << endl ;

}
