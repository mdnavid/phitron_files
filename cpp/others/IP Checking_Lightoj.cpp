#include<bits/stdc++.h>

using namespace std ;

long long int decToBinary(long long int n)
{
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}

int main()
{

    int test , j = 1 ;

    cin >> test ;

    while(j<=test)
    {
        printf("Case %d: ",j++) ;

        string s1 , s2 , number = "" ;
        long long a[3] , b[3] ,k = 0 ;

        cin >> s1 >> s2 ;

        for(int i=0 ; i<s1.size() ; i++)
        {
            if(s1[i]!=':')
                number = number + s1[i] ;
            else
            {
                a[k] = atoi(a.c_str()) ;
                b[k] = fnd(a[k]) ;
                number = "" ;
            }
        }
    }

}
