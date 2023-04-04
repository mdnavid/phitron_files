#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;
    int len ;

    cin >> s ;

    len = s.size() ;

    int ans = 0 ;

    for(int i=0 ; i<len ; i++)
    {

        if(s[i]>='0'&&s[i]<='9')
        {
            int n ;

            n = s[i] - '0' ;

            if(n%2==1)ans++ ;

        }

        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')ans++ ;

    }

    cout << ans << endl ;

}
