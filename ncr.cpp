ll fact[maxn];

void factorial(ll n){
	fact[0]=1;
	for(ll i=1;i<=n;i++){
		fact[i]=fact[i-1]*i;
		fact[i]%=mod;
	}
}

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

ll powmod(ll a,ll b){
	if(a==1)
		return 1;
	if(b==0)
		return 1;
	ll c=powmod(a,b/2);
	ll res=1;
	if(b%2){
		res=(c*c)%mod;
		res*=a;
		res%=mod;
	}
	else
		res=((c*c)%mod);
	return res;
}

ll modInv(ll a){return powmod(a,mod-2)%mod;}

ll ncr(ll n,ll r){
	ll b=modInv(fact[n-r]);
	ll c=modInv(fact[r]);
	ll a=fact[n]*b;
	a%=mod;
	a*=c;
	a%=mod;
	return a;
}