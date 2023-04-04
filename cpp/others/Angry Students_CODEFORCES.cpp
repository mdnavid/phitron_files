#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int t ;

    cin >> t ;

    while(t--)
    {

        int n, cntP = 0, cntA = 0 ;
        string s ;

        cin >> n >> s ;

        for(int i=0 ; i<s.size() ; i++)
        {
            if(s[i]=='A')
            {
                cntA++ ;
                cntP = 0 ;
            }
            else if(s[i]=='P' && cntA>0 && i!=s.size()-1)
                cntP++ ;
            /*else if(s[i]=='P' && cntA==0)
                cntP = 0 ;*/
        }
        cout << cntP << endl  ;
    }

}
