struct cmp {
	bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
		if (a.fi == b.fi) return a.se < b.se;
		return a.fi>b.fi;
	}
};
