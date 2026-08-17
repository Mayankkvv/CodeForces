#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
class DisjointSet
{
  vector<int> rank, parent, size;
 
public:
  DisjointSet(int n)
  {
    rank.resize(n + 1, 0);
    parent.resize(n + 1);
    size.resize(n + 1);
    for (int i = 0; i <= n; i++)
    {
      parent[i] = i;
      size[i] = 1;
    }
  }
 
  int findUPar(int node)
  {
    if (node == parent[node])
      return node;
    return parent[node] = findUPar(parent[node]);
  }
 
  void unionByRank(int u, int v)
  {
    int ulp_u = findUPar(u);
    int ulp_v = findUPar(v);
    if (ulp_u == ulp_v)
      return;
    if (rank[ulp_u] < rank[ulp_v])
    {
      parent[ulp_u] = ulp_v;
    }
    else if (rank[ulp_v] < rank[ulp_u])
    {
      parent[ulp_v] = ulp_u;
    }
    else
    {
      parent[ulp_v] = ulp_u;
      rank[ulp_u]++;
    }
  }
 
  void unionBySize(int u, int v)
  {
    int ulp_u = findUPar(u);
    int ulp_v = findUPar(v);
    if (ulp_u == ulp_v)
      return;
    if (size[ulp_u] < size[ulp_v])
    {
      parent[ulp_u] = ulp_v;
      size[ulp_v] += size[ulp_u];
    }
    else
    {
      parent[ulp_v] = ulp_u;
      size[ulp_u] += size[ulp_v];
    }
  }
};
 
int main()
{
  int t;
  cin >> t;
 
  while (t--)
  {
    int n;
    cin >> n;
 
    vector<int> par(n + 1, 0);
 
    for (int i = 2; i <= n; i++)
    {
      cin >> par[i];
    }
 
    int m;
    cin >> m;
 
    vector<char> isDam(n + 1, 0);
 
    for (int i = 0; i < m; i++)
    {
      int a;
      cin >> a;
      isDam[a] = 1;
    }
 
    vector<vector<int>> activeChildren(n + 1);
    vector<char> hasMarked(n + 1, 0);
    vector<int> ans;
 
    for (int v = n; v >= 1; v--)
    {
      int c = (int)activeChildren[v].size();
      int stop = isDam[v] ? 1 : 0;
 
      hasMarked[v] = (stop == 1) || (c >= 1);
 
      if (c + stop >= 2)
      {
        if (stop == 1)
        {
          for (int u : activeChildren[v])
          {
            ans.push_back(u);
          }
        }
        else
        {
          for (int i = 0; i < c - 1; i++)
          {
            ans.push_back(activeChildren[v][i]);
          }
        }
      }
 
      if (v != 1 && hasMarked[v])
      {
        activeChildren[par[v]].push_back(v);
      }
    }
 
    cout << ans.size();
 
    for (int u : ans)
    {
      cout << " " << u;
    }
 
    cout << '
';
  }
 
  return 0;
}