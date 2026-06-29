#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }
        vector<int> p(2 * n + 1); // p[1..2n]
        long long sum_p = 0;
        for (int s = 2; s <= 2 * n; ++s) {
            if (s <= n + 1) {
                p[s] = grid[0][s - 2];
            } else {
                int row = s - n - 1;
                p[s] = grid[row][n - 1];
            }
            sum_p += p[s];
        }
        long long total = (2LL * n * (2LL * n + 1)) / 2;
        p[1] = total - sum_p;
        for (int i = 1; i <= 2 * n; ++i) {
            cout << p[i] << " ";
        }
        cout << "
";
    }
    return 0;
}