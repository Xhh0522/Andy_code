#include<iostream>
using namespace std;
float c(int r) 
{
	return 2 * 3.14 * r;
}
float s(int r)
{
	return 3.14 * r * r;
}
int main()
{
	int r;
	cin >> r;
	cout <<"直径=" << 2 * r << endl;
	cout <<"周长=" << c(r) << endl;
	cout <<"面积=" << s(r) << endl;
}
