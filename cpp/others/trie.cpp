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
        current=node;
        mp[node]++;
    }
}

bool prefixsearch(TrieNode *root,string word)
{
    TrieNode *current=root;
    for(int i=0; i<word.size(); i++)
    {
        char ch=word[i];
        TrieNode *node=current->child[ch];
        if(!node)
            return false;
        current=node;
    }
    if(mp[current]>1) return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t ;
    cin >> t ;

    while(t--)
    {

        int n , flag = 1 ;

        cin >> n ;

        string s[n] ;

        TrieNode *root = new TrieNode();

        for(int i=0 ; i<n ; i++)
        {
            cin >> s[i] ;
            insert(root,s[i]) ;
        }

        sort(s,s+n) ;

        for(int i=0 ; i<n ; i++)
        {
            if(prefixsearch(root,s[i]))
            {
                flag = 0 ;
            }
        }
        if(flag)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;

        mp.clear() ;

    }
}
