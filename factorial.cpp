ll fact[maxn];

void factorial(ll n){
	fact[0]=1;
	for(ll i=1;i<=n;i++){
		fact[i]=fact[i-1]*i;
		fact[i]%=mod;
	}
}