// cycle in Directed graph

bool dfs(vector < int >adj[], int root, vector < bool > &vis, vector < bool >&par)
{
    vis[root] = true;
    par[root] = true;

    for(int child : adj[root])
    {
        if(!vis[child])
        {
            if(dfs(adj, child, vis, par))
                return true;
        }
        else if(par[child] == true)
            return true;
    }

    par[root] = false;

    return false;
}
