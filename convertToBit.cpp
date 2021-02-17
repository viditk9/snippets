string convert_to_bit(ll a){
	string s;
	while(a>0){
		s+=(a%2)+48;
		a/=2;
	}
	reverse(all(s));
	return s;
}