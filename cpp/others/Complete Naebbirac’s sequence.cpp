#include<bits/stdc++.h>

using namespace std ;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{

    int k, n ;

    cin >> k >> n ;

    map<int,int>mp ;

    for(int i=0 ; i<n ; i++)
    {
        int a ;
        cin >> a ;
        mp[a]++ ;
    }


    map<int,int> :: iterator it ;

    vector< pair<int,int> >v ;

    for(it=mp.begin() ; it!=mp.end() ; it++)
        v.push_back(make_pair(it->first,it->second)) ;

    sort(v.begin(), v.end(), sortbysec) ;

    int first = v[0].first ;
    int last = v[k-1].first, flag = 1 ;

    v[0].second = v[0].second+1 ;

    for(int i=1 ; i<k ; i++)
    {
        if(v[i].second!=v[i-1].second)
        {
            flag = 0 ;
            break ;
        }
    }
    if(flag)
    {
        cout << "+" << first << endl ;
        return 0 ;
    }

    flag = 1 ;
    v[0].second = v[0].second-1 ;
    v[k-1].second = v[k-1].second-1 ;

    for(int i=1 ; i<k ; i++)
    {
        if(v[i].second!=v[i-1].second)
        {
            flag = 0 ;
            break ;
        }
    }
    if(flag)
    {
        cout << "-" << last << endl ;
        return 0 ;
    }

    flag = 1 ;
    v[0].second = v[0].second+1 ;

    for(int i=1 ; i<k ; i++)
    {
        if(v[i].second!=v[i-1].second)
        {
            flag = 0 ;
            break ;
        }
    }
    if(flag)
    {
        cout << "-" << last << " +" << first << endl ;
        return 0 ;
    }

    if(k-mp.size()>1)
    {
        cout << "*" << endl ;
        return 0 ;
    }

    for(int i=1 ; i<=k ; i++)
    {
        if(mp[i]==0)
        {
            cout << "+" << i << endl ;
            return 0 ;
        }
    }

}
