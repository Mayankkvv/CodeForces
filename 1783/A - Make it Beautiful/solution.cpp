#include <bits/stdc++.h>
using namespace std;
 
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
        sort(arr.begin(), arr.end());
        int mini = arr[0];
        int maxi = arr[n-1];
        if(mini == maxi){
          cout<<"NO
";
        }else{
          cout<<"YES
";
          cout<<maxi<<" ";
          for(int i = 0; i < n-1; i++){
            cout<<arr[i]<<" ";
          }
          cout<<endl;
        }
    }
 
    return 0;
}