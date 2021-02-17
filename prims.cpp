// ---------------------------PRIMS----------------------//
void mst(vp v[],ll N, vi &par){
	priority_queue< pll, vector<pll>, greater<pll> > pq;
	vi auxilary(N+1,INT_MAX);
	vb inTree(N+1,false);
	
	pq.push({0,1});
	auxilary[1] = 0;
	
	while(!pq.empty()){
		int x = pq.top().second;
		pq.pop();
		inTree[x] = true;
		
		for(auto p:v[x]){
			int y = p.first;
			int w = p.second;
			if(!inTree[y] && auxilary[y] > w){
				auxilary[y] = w;
				pq.push({w,y});
				par[y] = x; 
			}
			
		}
	}
	return;
}