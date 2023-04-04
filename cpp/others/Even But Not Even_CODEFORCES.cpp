#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        int n, sum = 0 ;
        string s ;

        cin >> n ;

        for(int i=0 ; i<n ; i++)
        {
            char c ;
            cin >> c ;
            s = s + c ;
            sum = sum + c - 48 ;
        }
        // cout << sum << endl ;
        if((s[n-1]-48)%2==1)
        {
            if(sum%2==0)
                cout << s << endl ;
            else
            {
                int cnt = 1 ;
                string y ;
                for(int i=0 ; i<n ; i++)
                {
                    if((s[i]-48)%2==1 && cnt==1 && i!=n-1)
                    {
                        if(i==0)
                        {
                            if(s[i+1]!='0')
                            {
                                cnt-- ;
                                continue ;
                            }
                        }
                        else
                        {
                            cnt-- ;
                            continue ;
                        }
                    }
                    y = y + s[i] ;
                }
                if(cnt==0)
                    cout << y << endl ;
                else
                    cout << "-1\n" ;
            }
        }
        else
        {
            for(int i=n-1 ; i>0 ; i--)
            {
                if((s[i]-48)%2==1)
                {
                    s.resize(i+1) ;
                    break ;
                }
                sum -= s[i] - 48 ;
            }
            if(s.size()==n)
                cout << "-1\n" ;
            else
            {
                if(sum%2==0)
                    cout << s << endl ;
                else
                {
                    int cnt = 1 ;
                    string y = "" ;
                    for(int i=0 ; i<s.size() ; i++)
                    {
                        if((s[i]-48)%2==1 && cnt==1 && i!=s.size()-1)
                        {
                            if(i==0)
                            {
                                if(s[i+1]!='0')
                                {
                                    cnt-- ;
                                    continue ;
                                }
                            }
                            else
                            {
                                cnt-- ;
                                continue ;
                            }
                        }
                        //cout << s[i] << " " ;
                        y = y + s[i] ;
                    }
                    if(cnt==0)
                        cout << y << endl ;
                    else
                        cout << "-1\n" ;
                }
            }
        }
    }

}
