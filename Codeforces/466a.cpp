#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	cout << ((n / m) * min(b, m * a)) + min((n % m) * a, b);
}
