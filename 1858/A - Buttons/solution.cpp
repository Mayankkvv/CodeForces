#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        long long a, b, c; 
        cin >> a >> b >> c;
        if (c % 2 == 1) 
        {
            if (b > a) 
                cout << "Second" << endl; 
            else
                cout << "First" << endl; 
        }
        else 
        {
            if (a > b)
                cout << "First" << endl;
            else
                cout << "Second" << endl; 
        }
    }
    return 0;
}
 
// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)