#include<bits/stdc++.h>

using namespace std ;

struct node
{
    int data ;
    node *next ;
};

node *root = NULL ;

void append(int number)
{

    if(root==NULL)
    {
        root = new node() ;
        root -> data = number ;
        root -> next = NULL ;
    }

    else
    {
        node *c_node = root ;
        while(c_node->next!=NULL)
            c_node = c_node->next ;
        node *neo = new node() ;
        neo -> data = number ;
        neo -> next = NULL ;

        c_node -> next = neo ;
    }

}
void print()
{

    node *c_node = root ;
    while(c_node->next!=NULL)
    {
        cout << c_node->data << endl ;
        c_node = c_node->next ;
    }

}
int  main()
{

    int n, number ;

    cin >> n ;

    while(n--)
    {

        cin >> number ;

        append(number) ;

    }

    print() ;

}
