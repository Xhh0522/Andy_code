#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	const int a = 6;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int b[6];
		int sum = 0;
		for (int j = 0; j < a; j++)
		{
			cin >> b[j];
			sum += b[j];
		}
		float average = sum * 1.00 / a;
		float var = 0;
		for (int i = 0; i < a; i++)
		{
			var += (average - b[i]) * (average - b[i]);
		}
		var = var * 1.00 / a;
		cout << fixed << setprecision(2) << average << " " << var << endl;
	}
}