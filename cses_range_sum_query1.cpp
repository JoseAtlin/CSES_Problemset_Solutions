#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n,q,b,c,temp,store=0;
    cin >> n >> q;
    ll a[n+1];
    a[0] = 0;
    for (int i=1;i<=n;i++) {
        cin >> temp;
        store += temp;
        a[i] = store;
    }

    for (int i=0;i<q;i++) {
        cin >> b >> c;
        cout << (a[c] - a[b-1]) << "\n";
    }
}