#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    map<int, int> mpp;
	    for(int it = 0; it<n; it++){
	        mpp[arr[it]]++;
	    }
	    if(mpp.size() > 2){
	        cout << "NO"<< endl;
	    }
	    else{
	        int freq1 = mpp.begin()->second;
	        int freq2 = mpp.rbegin()->second;
	        if(abs(freq1 - freq2) <= 1){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    
	}
	return 0;
 
}