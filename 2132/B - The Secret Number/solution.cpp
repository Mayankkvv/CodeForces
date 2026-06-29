#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
 
        vector<long long> answers;
 
        long long p = 10;
        while (p <= n) {
            long long denom = p + 1;
            if (n % denom == 0) {
                long long x = n / denom;
                if (x > 0) answers.push_back(x);
            }
            if (p > n / 10) break; 
            p *= 10;
        }
 
        if (answers.empty()) {
            cout << 0 << "
";
        } else {
            sort(answers.begin(), answers.end());
            cout << answers.size() << "
";
            for (int i = 0; i < (int)answers.size(); i++) {
                cout << answers[i] << (i + 1 == (int)answers.size() ? '
' : ' ');
            }
        }
    }
}