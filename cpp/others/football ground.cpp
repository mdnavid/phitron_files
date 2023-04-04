#include<bits/stdc++.h>

using namespace std ;

int main()
{

    queue<int>q ;

    int n , number , sum = 0 ;

    cin >> n ;

    while(n--)
    {
        cin >> number ;
        q.push(number) ;
    }
    int a , b ;
    while(q.size()!=1)
    {
        a = q.front() ;
        q.pop() ;
        b = q.front() ;
        q.pop() ;
        sum = abs(a-b) + sum ;
        q.push(max(a,b)) ;
    }

    cout << sum << endl ;

}
