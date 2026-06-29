#include <bits/stdc++.h>
using namespace std;
 
bool check(string s, string x)
{
    if (x.size() < s.size()) return false;
    for (int i = 0; i <= x.size() - s.size(); i++)
    {
        bool match = true;
        for (int j = 0; j < s.size(); j++)
        {
            if (x[i + j] != s[j])
            {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        int ans = -1;
 
        for (int op = 0; op <= 5; op++)
        {
            if (check(s, x))
            {
                ans = op;
                break;
            }
 
            x += x;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}