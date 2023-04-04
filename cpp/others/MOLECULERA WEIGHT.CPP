#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int t ;

    cin >> t ;

    map<char,double>mp ;

    mp['C'] = 12.01 ;
    mp['O'] = 16.00 ;
    mp['H'] = 1.008 ;
    mp['N'] = 14.01 ;

    while(t--)
    {

        string s ;
        double ans = 0.0 ;

        cin >> s ;

        for(int i=0 ; i<s.size() ; i++)
        {
            if((s[i+1]>='0'&&s[i+1]<='9')&&(s[i+2]>='0'&&s[i+2]<='9'))
            {
                int n = ((s[i+1]-48)*10) + (s[i+2]-48) ;
                ans = ans + (mp[s[i]] * double(n)) ;
            }
            else if(s[i+1]>='0'&&s[i+1]<='9')
            {
                int n = s[i+1]-48 ;
                ans = ans + (mp[s[i]]*double(n)) ;
            }
            else ans = ans + (mp[s[i]]) ;
        }

        printf("%0.3f\n",ans) ;
        //cout << ans << endl ;

    }

}
