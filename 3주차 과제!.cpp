#include <iostream>
using namespace std;

void result(int isum);


int main(void) 
{

	int isum = 0;
	int ivalue[6]; // �迭 ����
	int i;  // �迭�� �� �ʱ�ȭ

	for (i = 0; i < 6; i++)
	{
		cout << i + 1 << "��° ���ڸ� �Է��Ͻÿ� :";
		cin >> ivalue[i];
		isum = isum + ivalue[i];
	}
	result(isum);
}

void result(int isum)
{
	cout << "���� ���ڵ��� ���� " << isum << "�Դϴ�";
}
