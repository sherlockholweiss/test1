#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, temp;
	cout << "����������������" << endl;
	cin >> a >> b;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}//����n����ϴ��ֵ
	c = a * b;
	while (b != 0)
	{
		d = a % b;
		a = b;
		b = d;
	}//��������������ֱ��������0
	cout << "���ǵ����Լ��Ϊ" << a << endl;
	cout << "���ǵ���С������Ϊ" << c << endl;
}