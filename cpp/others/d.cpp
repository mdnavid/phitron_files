#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int test ;

    cin >> test ;

    while(test--)
    {

        string a, b ;
        vector<int>v ;

        cin >> a >> b ;

        int index = 0 , cnt = 0 ;

        index = a.find(b) ;

        while(index!=-1)
        {
            cnt++ ;
            v.push_back(index+1) ;
            index =  a.find(b,index+b.size()) ;
        }

        if(v.size()==0)
            cout << "Not Found" << endl << endl ;
        else
        {
            cout << v.size() << endl ;
            for(int i=0 ; i<v.size() ; i++)
            {
                cout << v[i] << " " ;
            }
            cout << endl << endl ;
        }
        v.clear() ;
    }

}
