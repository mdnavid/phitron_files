#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;

    int pos = 0, time, nobg ;

    cin >> nobg >> time ;

    cin >> s ;

    while(time--)
    {
        int val = -2 ;
        while((val = s.find("BG",val+2))!=-1)
        {
            s.erase(val,2);
            s.insert(val,"GB");
        }
    }

    cout << s << endl ;

}
