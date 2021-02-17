ll LIS(vi v) 
{ 
    vi tail; 
    tail.pb(v[0]); 
    for (ll i = 1; i < v.size(); i++) { 
        if (v[i] < *tail.begin()) 
            *tail.begin() = v[i]; 
        else if (v[i] > tail[tail.size()-1]) 
            tail.pb(v[i]); 
        else
            tail[lower_bound(all(tail),v[i])-tail.begin()] = v[i]; 
    } 
	return tail.size(); 
}