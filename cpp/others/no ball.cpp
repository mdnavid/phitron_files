#include<bits/stdc++.h>

using namespace std ;

int main()
{

    char s[5][5] ;
    int cas, p = 1 , m  , n , b  ;

    cin >> cas ;
    getchar() ;

    while(p<=cas)
    {
        for(int i=0 ; i<5 ; i++)
        {
            for(int j=0 ; j<5 ; j++)
            {

                scanf("%c",&s[i][j]) ;

                if(s[i][j]=='>')
                {
                    m = i ;
                }

            }
            getchar() ;
        }
        for(int j=0 ; j<5 ; j++)
        {
            if(s[m][j]=='>')n = j ;
            else if(s[m][j]=='|')b = j ;
        }
        getchar() ;
        if(b>n)cout << "Case " <<p << ": "<< "Thik Ball" << endl ;
        else cout << "Case " << p<< ": "<< "No Ball" << endl ;


        p++ ;

    }

}
