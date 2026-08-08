#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
class DisjointSet {
    vector<int> rank, parent, size;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }
 
    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }
 
    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
 
    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> brr(n);
        for(int i = 0; i < n; i++){
          cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
          cin >> brr[i];
        }
        vector<int> sub1(2*n + 1);
        vector<int> sub2(2*n + 1);
        int cnt = 1;
        for(int i = 1; i < n; i++){
          if(arr[i] == arr[i-1]) cnt++;
          else{
            sub1[arr[i-1]] = max(sub1[arr[i-1]], cnt);
            cnt = 1;
          }
        }
        sub1[arr[n-1]] = max(sub1[arr[n-1]], cnt);
 
        cnt = 1;
        for(int i = 1; i < n; i++){
          if(brr[i] == brr[i-1]) cnt++;
          else{
            sub2[brr[i-1]] = max(sub2[brr[i-1]], cnt);
            cnt = 1;
          }
        }
        sub2[brr[n-1]] = max(sub2[brr[n-1]], cnt);
 
 
        int mx_freq = -1;
        for(int i = 1; i <= 2*n; i++){
          mx_freq = max(mx_freq, sub1[i] + sub2[i]);
        }
        cout<<mx_freq<<endl;
    }
 
    return 0;
}