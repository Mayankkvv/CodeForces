#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n+1,0); parent.resize(n+1); size.resize(n+1);
        for(int i=0;i<=n;i++) parent[i]=i, size[i]=1;
    }
 
    int findUPar(int node) {
        if(node==parent[node]) return node;
        return parent[node]=findUPar(parent[node]);
    }
 
    void unionByRank(int u,int v) {
        int ulp_u=findUPar(u), ulp_v=findUPar(v);
        if(ulp_u==ulp_v) return;
        if(rank[ulp_u]<rank[ulp_v]) parent[ulp_u]=ulp_v;
        else if(rank[ulp_v]<rank[ulp_u]) parent[ulp_v]=ulp_u;
        else parent[ulp_v]=ulp_u, rank[ulp_u]++;
    }
 
    void unionBySize(int u,int v) {
        int ulp_u=findUPar(u), ulp_v=findUPar(v);
        if(ulp_u==ulp_v) return;
        if(size[ulp_u]<size[ulp_v]) parent[ulp_u]=ulp_v, size[ulp_v]+=size[ulp_u];
        else parent[ulp_v]=ulp_u, size[ulp_u]+=size[ulp_v];
    }
};
 
int main() {
    int t; cin>>t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n, 0);
        for(int i = 0; i < n; i++){
          cin >> arr[i];
        }
        vector<pair<ll, ll>> seg(n);
        for(int i = 0; i < n; i++){
          seg[i] = {arr[i] - x, arr[i] + x};
        }
        ll ans = 0;
        ll l = seg[0].first;
        ll r = seg[0].second;
        for(int i = 1; i < n; i++){
          l = max(l, seg[i].first);
          r = min(r, seg[i].second);
          if(l > r){
            ans ++;
            l = seg[i].first;
            r = seg[i].second;
          }
        }
        cout<<ans<<endl;
    }
    return 0;
}