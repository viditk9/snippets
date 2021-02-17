ll isPowerof2(ll x) 
{ 
    return (x && !(x & x-1)); 
}