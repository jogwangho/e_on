#include <iostream>
using namespace std;

int isum=0;
int ivalue[6]; // �迭 ����
int i;  // �迭�� �� �ʱ�ȭ

void result()
{

	for (i = 0; i < 6; i++)
	{
		cout << i + 1 << "��° ���ڸ� �Է��Ͻÿ� :";
		cin >> ivalue[i];
		isum = isum + ivalue[i];
	}
}

int main() 
{
	result();
	cout << "���� ���ڵ��� ���� " << isum << "�Դϴ�";
}

