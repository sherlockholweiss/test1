#include<iostream>
using namespace std;
int main()
{
	char a[100];
	cin.getline(a, 100);
	int num = 0, word = 0, space = 0, other = 0;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] <= 'z' && a[i] >= 'a' || 'A' <= a[i] && a[i] <= 'Z')

			word++;

		else if (48 <= a[i] && a[i] <= 57)

			num++;

		else if (a[i] = ' ')

			space++;

		else

			other++;

	}
	cout << "��ĸ��" << word << endl;
	cout << "������" << num << endl;
	cout << "�ո���" << space << endl;
	cout << "������" << other << endl;
	return 0;
}