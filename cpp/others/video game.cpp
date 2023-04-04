#include<bits/stdc++.h>

using namespace std ;

int main()
{

    vector<long long int>v ;

    int n, h, indexofcrane = 0, state = 0 ;

    cin >> n >> h ;

    for(int i=0 ; i<n ; i++)
    {
        int a ;
        cin >> a ;
        v.push_back(a) ;
    }

    int a ;

    while(cin >> a&&a!=0)
    {
        if(a==1)
        {
            if(indexofcrane!=0)indexofcrane-- ;
        }
        else if(a==2)
        {
            if(indexofcrane!=n-1)indexofcrane++ ;
        }
        else if(a==3)
        {
            if(v[indexofcrane]==0)
                continue ;
            else if(state==0)
            {
                v[indexofcrane]-- ;
                state = 1 ;
            }
        }
        else if(a==4)
        {
            if(state==1&&v[indexofcrane]!=h)
            {
                v[indexofcrane]++ ;
                state = 0 ;
            }
        }
    }

    for(int i=0 ; i<v.size() ; i++)
        cout << v[i] << " " ;
    cout << endl ;

}
