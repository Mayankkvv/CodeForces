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
        vector<int> a(n);
        for (auto &x : a) 
        {
            cin >> x;
        }
        int zeroCount = 0;
        for (int x : a) 
        {
            if (x == 0) 
            {
                zeroCount++;
            }
        }
        if (zeroCount == 1)
         {
            cout << "NO" << '
';
            continue;
        }
        string s(n, 'C');
        int zerosSeen = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                zerosSeen++;
                if (zerosSeen == 2) {
                    s[i] = 'B';
                }
                else {
                    s[i] = 'A';
                }
            }
            else {
                s[i] = 'C';
            }
        }
        cout << "YES" <<endl;
        cout << s <<endl;
    }
 
    return 0;
}