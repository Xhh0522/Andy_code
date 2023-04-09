#include <iostream>
using namespace std;
int run(int year)
{
	if ((year % 4 == 0 ||  year % 100 != 0)&&year % 400 == 0 )
		return 1;
}
int main()
{
	int year, month, day;
	cin >> year >> month >> day;
	int count = 0;
	int y = 1900;
	count = 365 * (year - y);
	int co = 0;
	for (int i = y; i < year; i++)
	{
		if (run(i) == 1)
			co++;
	}
	count = count + co;
	switch (month)
	{
	case 1:count += 0;
		break;
	case 2:count += 31;		
		break;

	case 3:count += 59;
		break;

	case 4:count += 90;
		break;

	case 5:count += 120;
		break;

	case 6:count += 151;
		break;

	case 7:count += 181;
		break;

	case 8:count += 212;
		break;

	case 9:count += 243;
		break;

	case 10:count += 273;
		break;

	case 11:count += 304;
		break;

	case 12:count += 334;
		break;

	}
	if (run(year) == 1&&month>2)
		count++;
	count += day;
	count--;
	int final=count %= 7;
	switch (final)
	{
	case 0:cout << "Monday";
		break;

	case 1:cout << "Tuesday";
		break;

	case 2:cout << "Wednesday";
		break;

	case 3:cout << "Thursday";
		break;

	case 4:cout << "Friday";
		break;

	case 5:cout << "Saturday";
		break;

	case 6:cout << "Sunday";
		break;

	}
}