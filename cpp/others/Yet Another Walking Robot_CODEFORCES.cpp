#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        int n, l = -1, r = -1 ;
        string s ;

        cin >> n >> s ;

        for(int i=1 ; i<s.size() ; i++)
        {
            if((s[i]=='L' && s[i-1]=='R') || (s[i]=='R' && s[i-1]=='L'))
            {
                l = i - 1, r = i ;
                break ;
            }
            else if((s[i]=='U' && s[i-1]=='D') || (s[i]=='D' && s[i-1]=='U'))
            {
                l = i - 1, r = i ;
                break ;
            }
        }
        if(l!=-1 && r!=-1)
            cout << l + 1 << " " << r + 1<< endl ;
        else
        {
            l = -1 , r = -1 ;
            for(int i=3 ; i<s.size() ; i++)
            {
                string y = "1344" ;
                y[0] = s[i] ;
                y[1] = s[i-1] ;
                y[2] = s[i-2] ;
                y[3] = s[i-3] ;
                //cout << y << endl ;
                sort(y.begin(),y.end()) ;
              //  cout << y << endl ;
                if(y=="DLRU")
                    l = i - 3, r = i ;
            }
            if(l!=-1 && r!=-1)
                cout << l + 1 << " " << r + 1 << endl ;
            else
                cout << "-1" << endl ;
        }
    }

}
