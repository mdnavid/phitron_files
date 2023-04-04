#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int flag = 1 , coun = 0 , n , m  ;

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {

        cin >> m ;

        if(coun==0&&m==0)continue ;
        else if(m==0&&coun!=0)flag = 0 ;
        else if(flag==1)coun++ ;
        else
        {
            coun +=2 ;
            flag = 1 ;
        }

    }

    cout << coun << endl ;

}
