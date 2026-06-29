#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
 
        if (x == 1) {
 
            if (k == 1) {
                cout << "NO
";
            }
            else if (n % 2 == 0) {
                cout << "YES
";
                cout << n / 2 << "
";
                for (int i = 0; i < n / 2; i++)
                    cout << 2 << " ";
                cout << "
";
            }
            else {
                if (k >= 3) {
                    cout << "YES
";
                    cout << n / 2 << "
";
                    cout << 3 << " ";
                    for (int i = 0; i < (n - 3) / 2; i++)
                        cout << 2 << " ";
                    cout << "
";
                }
                else {
                    cout << "NO
";
                }
            }
 
        }
        else {
 
            cout << "YES
";
            cout << n << "
";
 
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
 
            cout << "
";
        }
    }
 
    return 0;
}