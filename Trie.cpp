// Implementation of Trie Data structure in c++

struct Trie {
    struct Trie* child[26];
    int wt;
    bool isend;

    Trie()
    {
        memset(child, 0, sizeof(child));
        wt = 0;
        isend = false;
    }
};

struct Trie* root;

void insert(string str, int W)
{
    struct Trie* cur = root;
    for (char ch : str)
    {
        int ind = ch - 'a';
        if (cur->child[ind] == nullptr)
        {
            cur->child[ind] = new Trie();
            cur->wt = max(cur->wt, W);
            
        }
        cur->wt = max(cur->wt, W);
        cur = cur->child[ind];
    }

    cur->isend = true;
}

int search(string str)
{
    struct Trie* cur = root;
    for (char ch : str)
    {
        int ind = ch - 'a';
        if (cur->child[ind] == nullptr)
            return -1;
        cur = cur->child[ind];
    }

    return cur->wt;

}
