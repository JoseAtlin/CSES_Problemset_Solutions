#include <bits/stdc++.h> 
using namespace std; 
  
#define ll long long
const int mxn = 2e5;
ll tree[2*mxn], n, q;

void update(ll p, ll value){  
    tree[p+n] = value; 
    p += n; 
    
    for (; p > 1; p >>= 1) 
        tree[p>>1] = tree[p] + tree[p^1]; 
} 
  
ll query(ll l, ll r){  
    ll res = 0; 
      
    for (l += n, r += n; l < r; l >>= 1, r >>= 1){ 
        if (l&1)  
            res += tree[l++]; 
        if (r&1)  
            res += tree[--r]; 
    } 
    return res; 
} 

int main() {
	cin >> n >> q;
	ll arr[n];
	for (int i=0; i<n; i++) cin >> arr[i];
    for (int i=0; i<n; i++)     
        tree[n+i] = arr[i]; 
    for (int i = n - 1; i > 0; --i)      
        tree[i] = tree[i<<1] + tree[i<<1 | 1];
	for (int i=1;i<2*n;i++) cout << tree[i] << " ";
}
