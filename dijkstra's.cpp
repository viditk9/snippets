void shortest(vp v[], ll source, vi &dist){
	priority_queue< pll, vector<pll>, greater<pll> > pq;
	pq.push({0LL,source});
	dist[source] = 0;
	
	while(!pq.empty()) {
		int x = pq.top().second;
		int wt = pq.top().first;
		pq.pop();
		if(dist[x]<wt) continue;
		for(auto p:v[x]){
			ll y = p.first;
			ll w = p.second;
			
			if(dist[y] > dist[x] + w){
				dist[y] = dist[x]+w;
				pq.push({dist[y],y});
			}
		}
	}
	return;
}