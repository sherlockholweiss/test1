#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x;
	cout << "������x��ֵ" << endl;
	cin >> x;
	if (0 < x && x < 1)
	{
		cout << "y��ֵΪ" << fixed << setprecision(2) << 3 - 2 * x << endl;
	}
	else if (1 <= x && x < 5)
	{
		cout << "y��ֵΪ" << 2 / (4 * x) + 1 << endl;
	}
	else if (5 <= x && x < 10)
	{
		cout << "y��ֵΪ" << x * x << endl;
	}
	else
	{
		cout << "�����ֵ���ڷ�Χ��" << endl;
	}
	return 0;
}