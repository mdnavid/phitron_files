#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;
    int n ;

    cin  >> n >> s ;

    for(int i=0 ; i<n/2 ; i++)
    {

        if(s[i]==s[n-1+i])continue ;
        else if(s[i]<'z'&&s[n-1+i]>'a'&&s[i]+1==s[n-1+i]-1)continue ;
        else if(s[i]>'a'&&s[n-1+i]<'z'&&s[i]-1==s[n-1+i]+1)continue ;
        else
        {
            cout << "No" << endl ;
            return 0 ;
        }

    }

    cout << "YEs" << endl ;

}
