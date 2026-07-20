#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main()
{
  int t;
  cin >> t;
 
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    int ans = INT_MAX;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] % 2 == 0)
        even++;
      if (arr[i] % k == 0)
      {
        ans = 0;
        break;
      }
 
      ans = min(ans, (k - arr[i] % k));
    }
    if(k == 4){
      if(even >= 2) ans = min(ans, 0);
      else if(even == 1) ans = min(ans, 1);
      else if(even == 0) ans = min(ans , 2);
    }
    cout<<ans<<endl;
  }
 
  return 0;
}