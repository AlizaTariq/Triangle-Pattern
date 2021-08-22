#include<iostream>
using namespace std;
int main()
{
	int i,r1,r2,c1,c2,n;
	cout << "Enter num of rows or columns:";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (r1 = n-1; r1 >= i; r1--)
		{
			cout << " ";
		}
		for (c1 = 1; c1 <= i; c1++)
		{
			cout << "*";
		}
		for (c2 = 2; c2 <= i; c2++)
		{
			cout << "*";
		}

		for (r2 = n-1; r2 >= i; r2--)
		{
			cout << " ";
		}

		cout << endl;
	}
	return 0;
}
