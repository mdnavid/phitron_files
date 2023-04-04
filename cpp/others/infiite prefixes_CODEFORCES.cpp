#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        long long int n, x, cnt0 = 0, cnt1 = 0 ;

        cin >> n >> x ;

        vector<int>ar ;

        for(int i=0 ; i<n ; i++)
        {
            char c ;
            cin >> c ;

            if(c=='0')
                ar.push_back(0) ;
            else if(c=='1')
                ar.push_back(1) ;
            if(ar[i]==0)
                cnt0++ ;
            else if(ar[i]==1)
                cnt1++ ;
        }

        if(cnt1==cnt0)
            cout << "-1\n" ;
        else
        {
            long long int p = cnt1, k = cnt0 ;
            long long int q = x/(cnt0 - cnt1) ;

            if(x/(cnt0-cnt1)<0 || x%(cnt0-cnt1)!=0)
                cout << "0\n" ;
            else if(x%(cnt0-cnt1)==0)
            {
                long long int cnt = 1 ;
                cnt0  = k * q ;
                cnt1  = p * q ;
                for(int i=0 ; i<n ; i++)
                {
                    if(ar[i]==0)
                        cnt0++ ;
                    else
                        cnt1++ ;
                    if(cnt0-cnt1==x)
                        cnt++ ;
                }
                cnt0  = k * q ;
                cnt1  = p * q ;
                for(int i=n-1 ; i>=0 ; i--)
                {
                    if(ar[i]==0)
                        cnt0-- ;
                    else
                        cnt1-- ;
                    if(cnt0-cnt1==x)
                        cnt++ ;
                }
                cout << cnt << "\n" ;
            }
        }


    }

    return 0 ;

}
