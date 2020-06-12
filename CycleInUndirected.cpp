// cycle detection in Undirected graph

bool dfs(vector < int >adj[], int root, int par, vector < bool > &vis)
{
    vis[root] = true;

    for(int child : adj[root])
    {
        if(!vis[child])
        {
            if(dfs(adj, child, root, vis))
                return true;
        }
        else if(par != child)
            return true;
    }

    return false;
}
