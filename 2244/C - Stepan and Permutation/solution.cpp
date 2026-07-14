#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void dfs(int node, int id, vector<vector<int>> &adj,
         vector<int> &comp) {
 
    comp[node] = id;
 
    for (int next : adj[node]) {
        if (comp[next] == -1) {
            dfs(next, id, adj, comp);
        }
    }
}
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
 
        int n, x, y;
        cin >> n >> x >> y;
 
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        vector<vector<int>> adj(n + 1);
        for (int i = 1; i <= n; i++) {
            if (i + x <= n) {
                adj[i].push_back(i + x);
                adj[i + x].push_back(i);
            }
            if (i + y <= n) {
                adj[i].push_back(i + y);
                adj[i + y].push_back(i);
            }
        }
        vector<int> comp(n + 1, -1);
        int id = 0;
        for (int i = 1; i <= n; i++) {
            if (comp[i] == -1) {
                dfs(i, id, adj, comp);
                id++;
            }
        }
        bool flag = true;
        for (int i = 1; i <= n; i++) {
            if (comp[i] != comp[arr[i]]) {
                flag = false;
                break;
            }
        }
        cout <<(flag ?"YES":"NO")<< "
";
    }
    return 0;
}