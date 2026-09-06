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
    ll n, k, b, s;
    cin >> n >> k >> b >> s; 
    ll minimum_s = (k * b);
    ll maximum_s = (k * b) + (k - 1) * n;
    if (s < minimum_s || s > maximum_s)
      cout << "-1" << endl; 
    else
    {
      vector<ll> ans(n, 0); 
      ans[0] = minimum_s;          
      s -= minimum_s;              
      for (int i = 0; i < n; i++)
      {
        long long add = min(k - 1, s); 
        ans[i] += add;                
        s -= add;                      
      }
      for (long long i = 0; i < n; i++)
        cout << ans[i] << " ";
      cout << endl;
    }
  }
 
    return 0;
  }