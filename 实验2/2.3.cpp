#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "���������ε�����" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a)
	{
		cout << "�������β�����" << endl;
	}
	else
	{
		cout << "���������ܳ�Ϊ" << a + b + c << endl;
	}
	if (a == b || a == c || b == c)//�������ں����жϣ�һ���Ǹ�ֵ
	{
		cout << "����һ������������" << endl;
	}
	else {
		cout << "�ⲻ��һ������������" << endl;
	}
}