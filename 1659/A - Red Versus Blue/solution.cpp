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
        int n , r , b;
        cin >> n >> r >> b;
        int red = (r/(b + 1));
        int extra = r % (b + 1);
        string s = "";
        for(int i = 1; i <= b +1 ; i++){
          for(int j = 0; j < red; j++){
            s += 'R';
          }
          if(extra > 0){
            s += 'R';
            extra--;
          }
          if(i != b + 1){
            s += 'B';
          }
        }
        cout<<s<<endl;
    }
    return 0;
}