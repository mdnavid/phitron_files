/*#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;

    cin >> s ;

    stringstream ss(s) ;

    int n ;

    ss >> n ;

    cout << n << endl ;

}
*/
#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int j, i = 1 ;
    string s1, s2, s3, s ;

    cin >> j ;

    getchar() ;

    while(i<=j)
    {

        cin >> s ;

        stringstream ss(s) ;

        int n ;

        ss >> n ;

        if(n>0)
        {
            if(s1.size()!=j)
                s1 = s1 + s + ' ' ;
            else
                s1 = s1 + s ;
        }
        else if(n<0)
        {
            if(s2.size()!=j)
                s2 = s2 + s + ' ' ;
            else
                s2 = s2 + s ;
        }
        else
        {
            if(s3.size()!=j)
                s3 = s3 + s + ' ' ;
            else
                s3 = s3 + s ;
        }

        i++ ;

    }

    if(s2.size()>0)cout << s2.size()-(s2.size()-1) << " " << s2 << endl ;
    if(s1.size()>0)cout << s1.size()-(s1.size()-1) << " " << s1 << endl ;
    if(s3.size()>0)cout << s3.size()-(s3.size()-1) << " " << s3 << endl ;

}
