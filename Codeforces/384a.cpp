#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if ((n * n) % 2 == 1)
	{
		cout << (n * n) / 2 + 1 << endl;
	}
	else
	{
		cout << (n * n) / 2 << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)
				{
					cout << 'C';
				}
				else
				{
					cout << '.';
				}
			}
			cout << endl;
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)
				{
					cout << '.';
				}
				else
				{
					cout << 'C';
				}
			}
			cout << endl;
		}
	}
}
