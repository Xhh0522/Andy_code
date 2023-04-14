#include<iostream>
using namespace std;
int huiwenshu(int n)
{
	int b = n;
	int k = 0;
	do {
		k = k * 10 + n % 10;
		n = n / 10;
	} while (n > 0);
	if (b == k)
		return 1;
}
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int m, k;
		cin >> m >> k;
		int j = 0;
			for (int n = m;; n++)
			{
				if (huiwenshu(n) == 1)
				{
					cout << n << " ";
					j++;
				}
				if (j == k)
					break;
			}
		cout << endl;
	}
}
