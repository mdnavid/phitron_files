#include<bits/stdc++.h>

using namespace std ;

bool compare(pair<int,int>a, pair<int,int>b)
{
    return a.second < b.second ;
}

int main()
{

    int cas ;

    cin >> cas ;

    while(cas--)
    {

        int activities, count = 1, finish ;
        pair<int,int>p[100000] ;

        cin >> activities ;

        for(int i=0 ; i<activities ; i++)
        {
            cin >> p[i].first >> p[i].second ;
        }
        sort(p,p+activities,compare) ;

        finish = p[0].second ;
        for(int i=1 ; i<activities ; i++)
        {
            if(p[i].first>=finish)
            {
                finish = p[i].second ;
                count++ ;
            }
        }
        cout << count << endl ;
    }

}
