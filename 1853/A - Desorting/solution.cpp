#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, diff = INT_MAX;
	    cin >> n;
	    vector<int> arr(n), copy;
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    copy = arr;
	    sort(copy.begin(), copy.end());
	    if(arr != copy){
	        cout<<0<<endl;
	    }else{
	        for(int i = 1; i< n; i++){
	            diff = min(diff, arr[i] - arr[i-1]);
	        }
	        cout<< (diff)/2 + 1<<endl;
	    }
	}
	return 0;
}