#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        if(n == 1){
            cout << 0 << "
";
            continue;
        }
        int X = 0;
        for(int x : a) X ^= x;
        
        if(X == 0){
            cout << 1 << "
";
        } else {
            int h = 31 - __builtin_clz(X);
            int cnt = 0;
            for(int x : a) if((x >> h) & 1) cnt++;
            cout << cnt << "
"; 
        }
    }
    return 0;
}