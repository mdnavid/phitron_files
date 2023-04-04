#include<bits/stdc++.h>
#define FREE(p) free(p); p = NULL;
using namespace std;

struct TrieNode
{
    map<char,TrieNode*> child;
};
map<TrieNode*,int> mp;

void insert(TrieNode *root,string word)
{
    TrieNode *current=root;
    for(int i=0; i<word.size(); i++)
    {
        char ch=word[i];
        TrieNode *node=current->child[ch];

        if(!node)
        {
            node=new TrieNode();
            current->child[word[i]] = node ;
        }
        else mp[node]++ ;
        current=node;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cas ;

    cin >> cas ;

    while(cas--)
    {

        int n ;
        cin >> n ;
        string s[n] ;

        TrieNode *root = new TrieNode() ;

        for(int i=0 ; i<n ; i++)
        {
            cin >> s[i] ;
            insert(root,s[i]) ;
        }

        int sum = 0 ;

        for(auto it=mp.begin() ; it!=mp.end() ; it++)
            sum = sum + it->second + 1 ;

        cout << sum + n << endl ;

        mp.clear() ;

    }

}
