#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int test ;

    cin >> test ;

    while(test--)
    {

        stack<char>stak ;

        string s ;
        int f = 1 ;

        cin >> s ;

        if(s.size()%2==0)
        {
            for(int i=0 ; i<s.size() ; i++)
            {

                if(s[i]=='['||s[i]=='{'||s[i]=='(')
                    stak.push(s[i]) ;

                else if(s[i]==']')
                {
                    if(!stak.empty()&&stak.top()=='[')
                        stak.pop() ;
                    else
                    {
                        f = 0 ;
                        break ;
                    }
                }
                else if(s[i]=='}')
                {
                    if(!stak.empty()&&stak.top()=='{')
                        stak.pop() ;
                    else
                    {
                        f = 0 ;
                        break ;
                    }
                }

                else if(s[i]==')')
                {
                    if(!stak.empty()&&stak.top()=='(')
                        stak.pop() ;
                    else
                    {
                        f = 0 ;
                        break ;
                    }
                }
            }
            if(f&&stak.empty())
                cout << "YES" << endl ;
            else
                cout << "NO" << endl ;
        }
        else
            cout << "NO" << endl ;
    }

    return 0 ;

}
