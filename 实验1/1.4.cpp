#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testunint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testunint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testunint) << endl;
	cout << "output in short type:" << static_cast<short>(testunint) << endl;
	cout << "output in int type:!" << static_cast<int>(testunint) << endl;
	cout << "output in double type:!" << static_cast<double>(testunint) << endl;
	cout << "output in double type:!" << setprecision(4) << static_cast<double>(testunint) << endl;
	cout << "output in Hex unsigned int type:" << oct << testunint << endl;//16�������
	float a = 1.1;
	cout << "ת����" << static_cast<int>(a) << endl;
	system("pause");
	return 0;
}