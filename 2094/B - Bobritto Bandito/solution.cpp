#include <iostream>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int rp = (r < m ? r : m);
        int lp = rp - m;
        cout << lp << " " << rp << "
";
    }
    return 0;
}