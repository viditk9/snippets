ll dsu[101];
ll get_par(ll a){
	if(a==dsu[a]) return a;
	return dsu[a]=get_par(dsu[a]);
}
void unite(ll a,ll b){
	ll pa,pb;
	pa= get_par(a);
	pb= get_par(b);
	dsu[pb] =pa;
}
