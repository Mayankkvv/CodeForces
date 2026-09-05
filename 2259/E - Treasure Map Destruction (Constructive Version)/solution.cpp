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
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) 
        {
            cin >> arr[i];
        }
        vector<int> diff(n + 2, 0);
        for (int i = 1; i <= n; i++) 
        {
            if (arr[i] > 0) {
                int d = arr[i];
                int L = max(1, i - d + 1);
                int R = min(n, i + d - 1);
                if (L <= R) {
                    diff[L]++;
                    diff[R + 1]--;
                }
            }
        }
        vector<char> forbid(n + 2, 0);
        int cur = 0;
        for (int i = 1; i <= n; i++) 
        {
            cur += diff[i];
            if (cur > 0) {
                forbid[i] = 1;
            }
        }
        vector<char> inS(n + 2, 0);
        bool ok = true;
        for (int i = 1; i <= n && ok; i++) 
        {
            if (arr[i] == 0) 
            {
                if (forbid[i])
                 {
                    ok = false;
                    break;
                }
                inS[i] = 1;
            }
            else if (arr[i] > 0) 
            {
                int d = arr[i];
                int L = i - d;
                int R = i + d;
                bool usableL = (L >= 1 && !forbid[L]);
                bool usableR = (R <= n && !forbid[R]);
                if (!usableL && !usableR)
                 {
                    ok = false;
                    break;
                }
                if (usableL)
                 {
                    inS[L] = 1;
                }
                else 
                {
                    inS[R] = 1;
                }
            }
        }
        if (ok)
         {
            bool hasSource = false;
            for (int i = 1; i <= n; i++) {
                if (inS[i]) {
                    hasSource = true;
                    break;
                }
            }
            if (!hasSource) {
                inS[1] = 1;
            }
        }
        if (!ok) {
            cout << -1 << '
';
        }
        else {
            string res(n, '0');
            for (int i = 1; i <= n; i++) {
                if (inS[i]) {
                    res[i - 1] = '1';
                }
            }
            cout << res << '
';
        }
    }
    
    return 0;
}