#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    for(int i = 0;i < n ; i++){
	        cin >> arr[i];
	    }
	    int maxi = *std::max_element(arr.begin(), arr.end());
	    vector<int> b, c;
	    for(int i = 0; i < n; i++){
	        if(arr[i] != maxi){
	            b.push_back(arr[i]);
	        }
	        else{
	            c.push_back(arr[i]);
	        }
	    }
	    if(b.size() == 0){
	        cout<< "-1" << endl;
	    }
	    else{
	        cout << b.size() << " " << c.size() << endl;
	        for (auto it : b)
                cout << it << " ";
            cout << endl;
            for (auto it : c)
                cout << it << " ";
            cout << endl;
	    }
	}
    return 0;
}