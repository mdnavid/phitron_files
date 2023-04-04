#include<bits/stdc++.h>

using namespace std ;

struct info
{
    string name ;
    int defence ;
    int attack ;
} ob[10];

bool compare(info a,info b)
{
    if(a.attack==b.attack)
    {
        if(a.defence==b.defence)
        {
            return a.name < b.name ;
        }
        else
            return a.defence < b.defence ;
    }
    else
        return a.attack > b.attack ;
}

int main()
{

    int cas, test = 1 ;

    cin >> cas ;

    cin.ignore() ;

    while(test<=cas)
    {
        for(int i=0 ; i<10 ; i++)
            cin >> ob[i].name >> ob[i].attack >> ob[i].defence ;

        sort(ob,ob+10,compare) ;

        /*for(int i=0 ; i<10 ; i++)
            cout << ob[i].name << " " << ob[i].attack << " " << ob[i].defence << endl ;*/

        cout << "Case " << test << ":" << endl ;

        vector<string>v ;

        for(int i=0 ; i<5 ; i++)
            v.push_back(ob[i].name) ;
        sort(v.begin(),v.end()) ;
        cout << "(" ;
        for(int i=0 ; i<5 ; i++)
        {
            if(i!=4)cout << v[i] << ", " ;
            else cout << v[i] << ")" << endl ;
        }

        v.clear() ;

        for(int i=5 ; i<10 ; i++)
            v.push_back(ob[i].name) ;
        sort(v.begin(),v.end()) ;
        cout << "(" ;
        for(int i=0 ; i<5 ; i++)
        {
            if(i!=4)cout << v[i] << ", " ;
            else cout << v[i] << ")" << endl ;
        }

        test++ ;

    }


}
