#include<stdio.h>


int c , d ;
int a[10000] ;

int fn(int f, int l, int e )
{
    if(a[(f+l)/2]==e&&f<=l)return (f+l)/2 ;
    else if(a[(f+l)/2]<e&&f<=l) return fn(((f+l)/2)+1,l, e) ;
    else if(a[(f+l)/2]> e&&f<=l) return fn(f,((f+l)/2)-1, e) ;
}

using namespace std ;
int main()
{

    int cas, number, querry, j =1 ;

    scanf("%d",&cas) ;

    while(j<=cas)
    {
        cout << "Case " << j << ": " ;
        cin >> number >> querry ;

        for(int i=0 ; i<number ; i++)cin >> a[number] ;

        for(int i=0 ; i<querry ; i++)
        {

            cin >> c >> d ;
            cout << fn(a[0],a[number-1],c) ;
        }
        j++ ;
    }
}
