#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n , flag = 1;

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {
        int y ;
        cin >> y ;
        if(y==1)
        {
            flag = 0 ;
        }
    }

    if(flag==1)cout << "EASY" << endl ;
    else cout << "HARD" << endl ;

}
