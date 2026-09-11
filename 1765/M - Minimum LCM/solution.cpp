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
    ll n;
		cin >> n; 
		ll ans_a = 1;
		ll ans_b = n - 1;
		for (ll fac = 2; fac * fac <= n; fac++)
		{
			if (n % fac == 0)
			{
				ans_a = n / fac;
				ans_b = n - ans_a;
				break;
			}
		}
		cout << ans_a << " " << ans_b << endl;
    }
    return 0;
}