  #include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        long long int a , b ;

        cin >> a >> b ;

        if(b==0)cout << 1 << endl ;

        else
        {

            int h = b % 4 ;

            if(h==0)cout << (a*a*a*a)%10 << endl ;
            else if(h==3)cout << (a*a*a)%10 << endl ;
            else if(h==2)cout << (a*a)%10 << endl ;
            else cout << a%10 << endl ;

        }

    }

}
