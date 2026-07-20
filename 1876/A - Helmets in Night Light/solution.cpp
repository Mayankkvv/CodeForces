#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n, p;
    cin >> n >> p;                           
    vector<pair<ll,ll>> v(n); 
    vector<ll> a(n), b(n);            
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    for (int i = 0; i < n; i++)
      v[i] = {b[i], a[i]};
    sort(v.begin(), v.end());
 
    ll minimum_cost = p;   
    ll already_shared = 1;
    for (auto it : v)
    {
      ll can_be_shared = it.second; 
      ll sharing_cost = it.first;
      if (sharing_cost >= p)
        break;
      if (already_shared + can_be_shared > n)
      {
        minimum_cost += (n - already_shared) * sharing_cost;
        already_shared = n; 
        break;
      }
      else
      {
        minimum_cost += can_be_shared * sharing_cost; 
        already_shared += can_be_shared;
      }
    }
    minimum_cost += (n - already_shared) * p;
    cout << minimum_cost << endl;
  }
  return 0;
}