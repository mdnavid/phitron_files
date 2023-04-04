#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        long long int number, flag = 0 ;

        cin >> number ;

        for(long long int i=sqrt(number) ; i>=2 ; i--)
        {
            if(number%i==0)
            {
                //cout << i << endl ;
                for(long long int j=sqrt(i) ; j>=2 ; j--)
                {
                    if(i%j==0 && j!=i/j)
                    {
                        cout << "YES\n" << number/i << " " << j << " " << i/j << endl ;
                        flag = 1 ;
                        break ;
                    }
                }
                if(flag==0)
                {
                    for(int j=sqrt(number/i) ; j>=2 ; j--)
                    {
                        if(number/i%j==0 && i!=j && j!=(number/i)/j && i!=(number/i)/j)
                        {
                            cout << "YES\n" << i << " " << j << " " << (number/i)/j << endl ;
                            flag = 1 ;
                            break ;
                        }
                   }
                }
            }
            if(flag==1)
                break ;
        }
        if(flag==0)
            cout << "NO\n" ;
    }

}
