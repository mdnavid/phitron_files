#include<bits/stdc++.h>

using namespace std ;

int main()
{

    string word ;

    getline(cin,word) ;

    stringstream s(word) ;

    while(s>>word)
    {
        cout << word << endl ;
    }

}
