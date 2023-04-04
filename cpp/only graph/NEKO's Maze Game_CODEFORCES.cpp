#include<bits/stdc++.h>
#define MX 10009

using namespace std ;

int n, q ;
bool state[MX][MX] ;

int main()
{

    //freopen("output.txt","w",stdout) ;
    int cnt = 0 ;
    map<pair<int,int>,bool>mp ;

    cin >> n >> q ;

    memset(state,1,sizeof(state)) ;

    for(int i=0 ; i<q ; i++)
    {
        int r, c ;
        cin >> r >> c ;
        mp[ {r,c}] = abs(1-mp[ {r,c}]) ;
        //cout << mp[{r,c}] << endl ;
        if(mp[ {r,c}]==1)
        {
            if(r==1)
            {
                if(mp[ {2,c}]==1)
                    cnt++ ;
                if(mp[ {2,c-1}]==1)
                    cnt++ ;
                if(mp[ {2,c+1}]==1)
                    cnt++ ;
            }
            else if(r==2)
            {
                if(mp[ {1,c}]==1)
                    cnt++ ;
                if(mp[ {1,c-1}]==1)
                    cnt++ ;
                if(mp[ {1,c+1}]==1)
                    cnt++ ;
            }
        }
        else if(mp[ {r,c}]==0)
        {

            if(r==1)
            {
                //cout << "Entered\n" ;
                if(mp[ {2,c}]==1)
                    cnt-- ;
                if(mp[ {2,c-1}]==1)
                    cnt-- ;
                if(mp[ {2,c+1}]==1)
                    cnt-- ;
            }
            else if(r==2)
            {
               // cout << mp[{2,c-1}] << 2 << " " << c-1 << endl ;1;
                if(mp[ {1,c}]==1)
                    cnt-- ;
                if(mp[{1,c-1}]==1)
                    cnt-- ;
                if(mp[ {1,c+1}]==1)
                    cnt-- ;
            }
        }
       // cout << cnt << endl ;
        if(cnt==0)
            cout << "Yes\n" ;
        else
            cout << "No\n" ;
    }
}
