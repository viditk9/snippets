struct TreeNode {
    
};
TreeNode node[4 * maxn];
 
TreeNode merge(TreeNode a, TreeNode b) {
    TreeNode X;
    return X;
}
 
void build(vi &v, int x, int lx, int rx) {
    if (lx == rx) {
        return;
    }
    int m = (lx + rx) >> 1;
    build(s, 2 * x , lx, m);
    build(s, 2 * x + 1, m+1, rx);
    node[x] = merge(node[2 * x], node[2 * x + 1]);
    return;
}
 
TreeNode query(int l, int r, int x, int lx, int rx) {
    if (lx >= r || rx <= l) return { 0,0,0 };
    if (lx >= l && rx <= r) return node[x];
    int m = (lx+rx) >> 1;
    // see(lx,m, rx);
    return merge(query(l, r, 2*x+1, lx, m), query(l, r, 2*x+2, m, rx));
}