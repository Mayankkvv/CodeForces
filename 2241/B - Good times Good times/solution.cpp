#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x;
        cin >> x;
        
        int L = 0;
        long long tmp = x;
        while(tmp > 0){ L++; tmp /= 10; }
        
        long long y = 1;
        for(int i = 0; i < L; i++) y *= 10;
        y += 1; 
        
        cout << y << "
";
    }
    return 0;
}