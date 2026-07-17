#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
    long long start, jumps; 
		cin >> start >> jumps;
 
		long long final; 
		if (jumps % 4 == 1)
			final = -jumps; 
		else if (jumps % 4 == 2)
			final = 1; 
		else if (jumps % 4 == 3)
			final = jumps + 1; 
		else if (jumps % 4 == 0)
			final = 0; 
		if (start % 2 == 0)
			final = start + final; 
		else
			final = start - final;
 
		cout << final << endl; 
    }
 
    return 0;
}