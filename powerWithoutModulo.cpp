ll power(ll a,ll b){
	if(a==1)
		return 1;
	if(b==0)
		return 1;
	ll c=power(a,b/2);
	ll res=1;
	if(b%2){
		res=(c*c);
		res*=(ll)a;
	}
	else
		res=((c*c));
	return res;
}