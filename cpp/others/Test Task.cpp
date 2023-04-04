#include<bits/stdc++.h>

using namespace std ;

int main()
{

    int n ;
    map<string,string>mp ;
    map<string,bool>state ;

    cin >> n ;

    for(int i=0 ; i<n ; i++)
    {
        string s ;
        cin >> s ;
        if(s=="register")
        {
            string username, password ;
            cin >> username >> password ;
            if(mp[username].size()!=0)
                cout << "fail: user already exists\n" ;
            else
            {
                cout << "success: new user added\n" ;
                mp[username] = password ;
            }
        }
        else if(s=="login")
        {
            string username, password ;
            cin >> username >> password ;
            if(mp[username].size()==0)
                cout << "fail: no such user\n" ;
            else if(mp[username]!=password)
                cout << "fail: incorrect password\n" ;
            else if(state[username]==1)
                cout << "fail: already logged in\n" ;
            else if(mp[username]==password)
            {
                cout << "success: user logged in\n" ;
                state[username] = 1 ;
            }
        }
        else
        {
            string username ;
            cin >> username ;
            if(mp[username].size()==0)
                cout << "fail: no such user\n" ;
            else if(state[username] == 0)
                cout << "fail: already logged out\n" ;
            else if(state[username] == 1)
            {
                cout << "success: user logged out\n" ;
                state[username] = 0 ;
            }
        }
    }

}
