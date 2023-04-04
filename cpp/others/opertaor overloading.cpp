#include<bits/stdc++.h>

using namespace std ;

class coord
{

    int x , y ;

public:
    coord(){ x=0 ; y=0 }
    coord(int i , int j){x = i ; y = j }
    freind coord operator+(coord ob1,coord ob2) ;

};

freind coord operator+(coord ob1,coord ob2)
{
    coord temp ;

    temp.x = ob1.x + ob2.x ;
    temp.y = ob1.y + ob2.y ;

    return temp ;
}

int main()
{



}
