#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    ll n, k;
	    cin >> n >> k;
	    vector<ll> a(n);
	    for(ll i = 0; i < n; i++){
	        cin >>  a[i];
	    }
	    vector<ll> copy =a;
	    sort(copy.begin(), copy.end());// sorting in increasing order
	    if(copy == a || k >= 2){
	        cout << "yes"<< endl;
	    }
	    else{
	        cout << "no"<< endl;
	    }
	}
	return 0;
 
}