//Md. Navid Alam

#include<bits/stdc++.h>

using namespace std ;

int n ;
vector<int>v, flag, no ;
map<int,int>mp ;

void func()
{
    for(int i=0 ; i<no.size() ; i++)
    {
        for(int j=0 ; j<flag.size() ; j++)
        {
           // cout << no[i] << " " << flag[j] << endl ;
            if(no[i]!=flag[j] && flag[j]!=-50)
            {
                swap(v[no[i]-1],flag[j]) ;
                flag[j] = -50 ;
                break ;
            }
        }
    }
}

int main()
{
    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {
        int a ;
        cin >> a ;
        v.push_back(a) ;
        if(v[i]==0)
            no.push_back(i+1) ;
        else
            mp[a]++ ;
    }

    for(int i=1 ; i<=n ; i++)
        if(mp[i]==0)
            flag.push_back(i) ;
    /*sort(flag.begin(), flag.end()) ;
    reverse(flag.begin(),flag.end()) ;
    sort(no.begin(), no.end()) ;*/
    /*for(int i=0 ; i<no.size() ; i++)
        cout << no[i] << " " ;
    cout << endl ;
    for(int i=0 ; i<flag.size() ; i++)
        cout << flag[i] << " " ;
    cout << endl ;*/
    func() ;

    for(int i=0 ; i<v.size() ; i++)
        cout << v[i] << " " ;
    cout << endl ;

}
 
