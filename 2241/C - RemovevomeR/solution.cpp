#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int cnt = 1;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]) cnt++;
        }
        
        if(cnt == 2) cout << 2 << "
";
        else cout << 1 << "
";
    }
    return 0;
}