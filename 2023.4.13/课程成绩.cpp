#include<iostream>
using namespace std;
struct student {
	char name;
	float score1;
	float score2;
	float score;
};
int main()
{
	struct student stu[100] = {0};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].name >> stu[i].score1 >> stu[i].score2;
		stu[i].score = 0.4 * stu[i].score1 + 0.6 * stu[i].score2;
	}
	for (int j = 0; j < n; j++)
	{
		int max = 0, maxmum = 0;
		for (int i = 0; i < n; i++)
		{
			if (stu[i].score > max)
			{
				max = stu[i].score;
				maxmum = i;
			}
		}
		cout << stu[maxmum].name << " " << stu[maxmum].score1 << " " << stu[maxmum].score2 << " " << stu[maxmum].score << endl;
		stu[maxmum] = { 0 };
	}
}