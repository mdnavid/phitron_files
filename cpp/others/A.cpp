#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int testcase ;

    cin >> testcase ;

    for(int i=1 ; i<=testcase ; i++)
    {

        double term1 , term2 , finale , attendence , test[3] ;

        cin >> term1 >> term2 >> finale >> attendence ;

        for(int i=0 ; i<3 ; i++)
            cin >> test[i] ;

        sort(test, test+3) ;
        reverse(test,test+3) ;

        double ans = term1 + term2 + finale + attendence + (test[0]+test[1])/2 ;
        char c ;

        if(ans>=90)
            c = 'A' ;
        else if(ans>=80 && ans<90)
            c = 'B' ;
        else if(ans>=70 && ans<80)
            c = 'C' ;
        else if(ans>=60 && ans<70)
            c = 'D' ;
        else if(ans<60)
            c = 'F' ;

        cout << "Case " << i << ": " << c << endl ;

    }

}
