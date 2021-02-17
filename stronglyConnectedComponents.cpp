vv g, gr,SSC;
vb used;
vi order, comp;

void dfs1(ll v) 
{
    used[v] = true;
    for(auto i:g[v])
    {
        if (!used[i]) dfs1(i);
    }
    order.pb(v);
}

void dfs2(ll v) 
{
    used[v] = true;
    comp.pb(v);
    for (auto i:gr[v])
    {
    	if (!used[i]) dfs2(i);
    }
}

int main() 
{
    ll n,m;
    cin>>n>>m;
    g = vv(n+1);
    gr = vv(n+1);
    rep(i,m)
    {
        ll a,b;
        cin>>a>>b;
        g[a].pb(b);
        gr[b].pb(a);
    }
    used.assign(n+1,false);
    rep1(i,n)
    {
        if (!used[i])
            dfs1(i);
    }
    used.assign(n+1, false);
    per(i,n) 
    {
        ll v = order[i];
        if (!used[v]) 
        {
            dfs2 (v);
            SSC.pb(comp);
            comp.clear();
        }
    }
    // SSC is the 2D vector of Strongly Connected Components 
    // where size of SSC is number of SSC's
    // and elements of SSC[i] are the vertices in ith component
}