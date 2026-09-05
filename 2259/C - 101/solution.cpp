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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int first = -1;
        int last = -1;
        // Find first and last 1
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                if (first == -1)
                    first = i;
 
                last = i;
            }
        }
        int left = -1;
        int right = -1;
        if (first == -1) {
            // No 1 exists
            for (int i = 0; i < n; i++) {
                if (a[i] != 0) {
                    left = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--) {
                if (a[i] != 0) {
                    right = i;
                    break;
                }
            }
            if (left != -1) {
                a[left] = 1;
                a[right] = 1;
            }
        }
        else {
            int bestLeft = first;
            int bestRight = first;
            int bestLen = 1;
            // Check left side
            for (int i = 0; i < first; i++) {
                if (a[i] != 0) {
                    left = i;
                    break;
                }
            }
            if (left != -1) {
                int len = first - left + 1;
 
                if (len > bestLen) {
                    bestLen = len;
                    bestLeft = left;
                    bestRight = first;
                }
            }
            // Check between 1s
            int prev = first;
            for (int i = first + 1; i < n; i++) {
                if (a[i] == 1) {
                    int len = i - prev + 1;
                    if (len > bestLen) {
                        bestLen = len;
                        bestLeft = prev;
                        bestRight = i;
                    }
                    prev = i;
                }
            }
            // Check right side
            for (int i = n - 1; i > last; i--) {
                if (a[i] != 0) {
                    right = i;
                    break;
                }
            }
            if (right != -1) {
                int len = right - last + 1;
                if (len > bestLen) {
                    bestLen = len;
                    bestLeft = last;
                    bestRight = right;
                }
            }
            a[bestLeft] = 1;
            a[bestRight] = 1;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == -1)
                a[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout <<endl;
    }
 
    return 0;
}