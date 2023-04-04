#include<bits/stdc++.h>

using namespace std ;

int main()
{


    int tast ;

    cin >> tast ;

    getchar() ;

    while(tast--)
    {
        stack<char>st ;

        string s ;
        int f = 1 ;

        getline(cin,s) ;

        if(s.size()==0)
            cout << "No" << endl ;
        else
        {
            if(s.size()%2==0)
            {
                for(int i=0 ; i<s.size() ; i++)
                {

                    if(s[i]=='['||s[i]=='{'||s[i]=='(')
                        st.push(s[i]) ;

                    else if(s[i]==']')
                    {
                        if(!st.empty()&&st.top()=='[')
                            st.pop() ;
                        else
                        {
                            f = 0 ;
                            break ;
                        }
                    }

                    else if(s[i]=='}')
                    {
                        if(!st.empty()&&st.top()=='{')
                            st.pop() ;
                        else
                        {
                            f = 0 ;
                            break ;
                        }
                    }

                    else if(s[i]==')')
                    {
                        if(!st.empty()&&st.top()=='(')
                            st.pop() ;
                        else
                        {
                            f = 0 ;
                            break ;
                        }
                    }
                }

                if(f&&st.empty())
                    cout << "Yes" << endl ;
                else
                    cout << "No" << endl ;
            }
            else
                cout << "No" << endl ;
        }
    }
}
