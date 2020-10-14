#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

const int INF = 1e9+5;

void SolveTestCase()
{

	int n, u, v, w, m;
	cin >> n >> m;
	vector< pair<int, int> >adj[n+1];
	for(int i=1; i<=m; ++i) {
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}
	vector<int>dist(n+1, INF);
	
	priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > >pq;
	
	pq.push({0, 1});
	dist[1] = 0;
	
	while(pq.empty() == false) {
		int curr_node = pq.top().second;
		int curr_dist = pq.top().first;
		pq.pop();
		
		for(pair<int, int> x : adj[curr_node]) 
			if(curr_dist + x.second < dist[x.first]) {
				dist[x.first] = curr_dist + x.second;
				pq.push({curr_dist + x.second, x.first});
			}		
	}
	
	for(int i=1; i<=n; ++i)
		cout << dist[i] << ' ';
	cout << endl;
	
}

signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	SolveTestCase();
	
	return 0;
}
