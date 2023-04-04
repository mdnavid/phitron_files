#include<bits/stdc++.h>

using namespace std ;

int main()
{

    vector<int>v ;

    v = {} ;

    for(int i=0 ; i<5 ; i++)
    {

        int number ;

        cin >> number ;

        int idup = lower_bound(v.begin(),v.end(),number) - v.begin() ;
        int idlow = upper_bound(v.begin(),v.end(),number) - v.begin() ;

        cout << idlow << " " << idup << endl ;

    }

}
