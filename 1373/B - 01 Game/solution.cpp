#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main()
{
	int t; 
	cin >> t;
	while (t--)
	{
		string s; 
		cin >> s;
 
		int one = 0; 
		int zero = 0;
		for (int i = 0; i < s.length(); i++) // n
		{
			if (s[i] == '0')
				zero++; 
			else
				one++; 
		}
		int operations = min(zero,one);
		if (operations % 2 != 0)
			cout << "DA" << endl;
		else
			cout << "NET" << endl; 
	}
	return 0;
}
 
 