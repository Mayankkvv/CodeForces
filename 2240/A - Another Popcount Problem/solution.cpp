#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        if(k >= n){
            cout << n << "
";
            continue;
        }
        
        long long per = n / k;
        int b = 0;
        while((2LL << b) - 1 <= per) b++;
        long long base        = (1LL << b) - 1;   
        long long remaining   = n - k * base;      
        long long upgrade_cost = (1LL << b);        
        long long r = min(k, remaining / upgrade_cost); 
        cout << k * (long long)b + r << "
";
    }
    return 0;
}