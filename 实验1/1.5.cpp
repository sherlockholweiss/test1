#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double T;
	cout << "�����뻪���¶�" << endl;
	cin >> T;
	cout << "ת��Ϊ�����¶�Ϊ" << endl;
	double t = (T - 32) / 1.8;
	cout << fixed << setprecision(2) << t << endl;

}