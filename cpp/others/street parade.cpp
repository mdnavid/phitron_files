#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n ;

    while(cin >> n && n!=0)
    {

        int index = 1 ;

        stack<int>s ;
        queue<int>v ;

        for(int i=0 ; i<n ; i++)
        {
            int g ;

            cin >> g ;

            v.push(g) ;
        }
        s.push(0) ;
        while(index<n)
        {

            int q = v.front() ;
            int st = s.top() ;
            if(q==index||st==index)
            {
                if(q==index)
                    v.pop() ;
                else
                    s.pop() ;
                index++ ;
            }
            else if(!v.empty())
            {
                s.push(q) ;
                v.pop() ;
            }
            if(v.empty() && s.top()!=index)
                break ;
        }

        if(index==n)
            cout << "yes" << endl ;
        else
            cout << "no" << endl ;
    }

}
