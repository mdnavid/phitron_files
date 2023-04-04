#include <bits/stdc++.h>

using namespace std ;

map<int,int>mp ;
vector<int>v ;

void prime_factor(long long int number)
{

    if(number%2==0&&mp[2]==0)
        v.push_back(2) ;

    while(number%2==0)
    {

        if(number!=2)
            mp[2]++ ;
        else
            mp[2]++;

        number /=2 ;

    }

    for(int i=3 ; i<=sqrt(number) ; i+=2)
    {

        if(number%i==0&&mp[i]==0)
            v.push_back(i) ;

        while(number%i==0)
        {

            if(number!=i)
                mp[i]++ ;
            else
                mp[i]++ ;

            number /=i ;

        }
    }

    if(number>2)
    {
        if(mp[number]==0)
            v.push_back(number) ;
        mp[number] ++ ;
    }

}

int main()
{

    int cas, j = 1 ;

    cin >> cas ;

    while(j<=cas)
    {

        int number ;

        cin >> number ;

        for(int i=number ; i>1 ; i--)
            prime_factor(i) ;

        cout << "Case " << j << ": " << number << " = " ;

        sort(v.begin(),v.end()) ;

        for(int i=0 ; i<v.size() ; i++)
        {
            cout << v[i] << " (" << mp[v[i]] << ")" ;
            if(i!=v.size()-1)
                cout << " * " ;
        }

        cout << endl ;

        mp.clear() ;
        v.clear() ;

        j++ ;

    }

}
