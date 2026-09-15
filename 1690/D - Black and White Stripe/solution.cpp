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
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll> prefix(n+1, 0);
        for(int i = 0; i < n; i++){
          prefix[i + 1] = prefix[i] + (s[i] == 'W');
        }
        ll min_cells = INT_MAX;
        for(int i = 0;i <= n - k; i++){
          ll diff = prefix[i+k] - prefix[i];
          min_cells = min(min_cells, diff);
        }
        cout<<min_cells<<endl;
    }
    return 0;
}