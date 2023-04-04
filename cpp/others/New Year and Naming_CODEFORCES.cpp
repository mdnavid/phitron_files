#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int a , b ;
    map<int,string>s ,t ;

    cin >> a >> b ;

    for(int i=1 ; i<=a ; i++)
    {
        string W ;
        cin >> W ;
        s[i] = W ;
    }
    for(int i=1 ; i<=b ; i++)
    {
        string W ;
        cin >> W ;
        t[i] = W ;
    }

    int q ;

    cin >> q ;

    for(int i=0 ; i<q ; i++)
    {
        long long int number ;
        cin >> number ;
        if(number%a==0 && number%b==0)
            cout << s[a]+t[b] << endl ;
        else if(number %a==0)
            cout << s[a]+t[number%b] << endl ;
        else if(number%b==0)
            cout << s[number%a]+t[b] << endl ;
        else
            cout << s[number%a]+t[number%b] << endl ;
    }

    return 0 ;

}
