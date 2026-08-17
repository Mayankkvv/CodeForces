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
    int n, m;
    cin >> n >> m;
    vector<string> words(n);
    vector<string> abbr(m);
    bool available[26] = {};
    for (int i = 0; i < n; i++)
    {
      cin >> words[i];
      available[words[i][0] - 'a'] = true;
    }
    for (int i = 0; i < m; i++)
    {
      cin >> abbr[i];
    }
    vector<bool> created(m, false);
    int count = 0;
    while (true)
    {
      bool changed = false;
 
      for (int i = 0; i < m; i++)
      {
        if (created[i])
          continue;
        bool possible = true;
        for (char c : abbr[i])
        {
          if (!available[c - 'A'])
          {
            possible = false;
            break;
          }
        }
        if (possible)
        {
          created[i] = true;
          count++;
          available[abbr[i][0] - 'A'] = true;
          changed = true;
        }
      }
      if (!changed)
        break;
    }
    if (count == m)
      cout << "YES
";
    else
      cout << "NO
";
  }
  return 0;
}