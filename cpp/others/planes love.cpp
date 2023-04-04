#include<bits/stdc++.h>

using namespace std ;

int main()
{
	
	long long int siz , a[1000] , l = 0 ;
	
	cin >> siz ;
	
	map<long long , long long>mp ;
	
	for(long long int i=0 ; i<siz ; i++)cin >> a[i] ;
	
	for(long long int i=0 ; i<siz ; i++)mp[a[i]] = a[a[i]] ;
	
	map<long long , long long> :: iterator it  ;
	
	for(it=mp.begin() ; it!=mp.end() ; it++)
	{
		
		int a , b , c ;
		
		a = it->first ;
		c = it->second ;
		b = mp[c] ;
		
		if(mp[b]==a)
		{ 
		l = 1 ;
		cout << "YES" << endl ;
		break ;
		}
		
	}
	
	if(l==0)cout << "NO" << endl ;
	
}
