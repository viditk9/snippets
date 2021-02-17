vi topo(vi v[],ll n)
{
	vi indeg(n+1,0);
	vi res;
	rep1(i,n)
	{
		for(auto j:v[i])
		{
			indeg[j]++:
		}
	}
	queue<ll> q;
	rep1(i,n)
	{
		if(indeg[i]==0) q.push(i);
	}
	while(!q.empty())
	{
		ll x=q.front();
		q.pop();
		res.pb(x);
		for(auto i:v[x])
		{
			indeg[i]--;
			if(indeg[i]==0) q.push(i);
		}
	}
	return res;
}