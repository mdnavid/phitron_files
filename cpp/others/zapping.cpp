#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int a , b ;

    while(cin >> a >> b && a!=-1 && b!=-1)
    {
        if(a<b)
            swap(a,b) ;
        //cout << a << " " << b << endl ;
        (a-b)<(100-a)+b? cout << (a-b) << endl  : cout << (100-a+b) << endl ;
    }

    return 0 ;

}
