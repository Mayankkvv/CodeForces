#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n), a;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        a.push_back(arr[0]);
        for(int i =1; i < n; i++){
            if(arr[i] >= arr[i-1]){
                a.push_back(arr[i]);
            }
            else{
                a.push_back(arr[i]);
                a.push_back(arr[i]);
            }
        }
        cout<<a.size()<<endl;
        for(auto it:a){
            cout<< it << " ";
        }
        cout<<endl;
    }
    return 0;
}