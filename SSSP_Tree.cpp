// .. Implementation of Single Source Shortest Path in c++ (Only Works for Trees)(N-1 Edges) ..

vector< int > adj[10001];
vector< bool > vis(10001);
vector< int > dist(10001);

void SSSP(int root , int dis)
{
    vis[root]=true;
    dist[root]=dis;

    for(auto x : adj[root])
    {
        if(vis[x]==false)
        {
            vis[x]=true;
            SSSP(x,dist[root]+1);
        }
    }
}

// call the SSSP function in the main function with 1 as root
