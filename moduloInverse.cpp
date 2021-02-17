ll gcd(ll a, lb, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
ll mod_inv(ll a,ll m) {
	ll x, y;
	ll g = gcd(a, m, x, y);
	if (g != 1) {
	    return -1;
	}
	else {
	    x = (x % m + m) % m;
	    return x;
	}
}