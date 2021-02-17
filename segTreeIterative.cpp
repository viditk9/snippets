ll n;
vi seg;

void build( vi arr)  
{  
    // insert leaf nodes in tree 
    for (int i=0; i<n; i++)     
        seg[n+i] = arr[i]; 
      
    // build the tree by calculating parents 
    for (int i = n - 1; i > 0; --i)      
        seg[i] = seg[i<<1] + seg[i<<1 | 1];     
} 
  
// function to update a tree node 
void update(ll p, ll value)  
{  
    // set value at position p 
    seg[p+n] = value; 
    p = p+n; 
      
    // move upward and update parents 
    for (int i=p; i > 1; i >>= 1) 
        seg[i>>1] = seg[i] + seg[i^1]; 
} 
  
// function to get sum on interval [l, r) 
ll query(int l, int r)  
{  
    int res = 0; 
      
    // loop to find the sum in the range 
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) 
    { 
        if (l&1)  
            res += seg[l++]; 
      
        if (r&1)  
            res += seg[--r]; 
    } 
      
    return res; 
}