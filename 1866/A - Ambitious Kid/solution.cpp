#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int N;
	cin >> N;
	vector<int> arr(N);
	int mini = 1e9;
	for(int i = 0; i < N; i++){
	    cin >> arr[i];
	    mini = min(mini, abs(arr[i]));
	}
	cout<<abs(mini)<<endl;
	return 0;
}