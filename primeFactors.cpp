map<ll,ll> primeFactors(ll n)  
{  
	map<ll,ll> s;
	while (n % 2 == 0)  
    {  
        s[2]++;
        n = n/2;  
    }  
  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        { 
			s[i]++;
            n = n/i;  
        }  
    }  
  
    if (n > 2) s[n]++;  
    return s;
}