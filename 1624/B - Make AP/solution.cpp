#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main()
{
	ll t;
	cin >> t; 
	while (t--)
	{
		ll a, b, c;
		cin >> a >> b >> c;
 
		bool answer = false;
		ll new_a = 2 * b - c; 
		if (new_a / a > 0 && new_a % a == 0)
			answer = true;
		ll new_b = (a + c) / 2; 
		if (new_b / b > 0 && new_b % b == 0 && (c - a) % 2 == 0) answer = true;
		ll new_c = 2 * b - a; 
		if (new_c / c > 0 && new_c % c == 0) 
			answer = true;
		if (answer)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}