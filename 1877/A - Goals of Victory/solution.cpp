#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n-1);
	    long long ans = 0;
	    for(int i = 0; i < n-1; i++){
	        cin >> arr[i];
	        ans += arr[i];
	    }
	    cout<<-1*ans<<endl;
	}
	return 0;
}