vi prefix(string s)
{
	ll n=s.size();
	vi p(n);
	rep1(i,n-1)
	{
		ll j=p[i-1];
		while(j>0 && s[i]!=s[j]) j = p[j-1];
		if(s[i]==s[j]) j++;
		p[i]=j; 
	}
	return p;
}