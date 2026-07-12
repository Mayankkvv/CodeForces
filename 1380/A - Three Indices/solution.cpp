#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
      int n;
      cin >> n;
      vector<int> arr(n);
      for(int i = 0; i < n; i++){
        cin >> arr[i];
      }
      bool flag = false;
      int cur = 1;
      while(cur < n-1){
        int next = cur +1;
        int prev = cur - 1;
        if(arr[cur] > arr[prev] && arr[cur] > arr[next]){
          flag = true;
          cout << "YES
";
          cout<<prev+1<<" "<<cur+1<<" "<<next+1<<endl;
          break;
        }else{
          cur++;
        }
      }
      if(flag == false){
        cout<<"NO
";
      }
 
    }
 
    return 0;
}