#include <iostream>
using namespace std;

void mysum(int *pvalue);

int main(void) {
	int pvalue[6] = { 0 };
	int i;

	for (int i = 0; i < 6; i++) {
		cout << i+1 << "��° ���ڸ� �Է��Ͻÿ�. : ";
		cin >> pvalue[i];
	}
	mysum(pvalue);
}

void mysum(int *pvalue) {
	int isum = 0;
	for (int i = 0; i < 6; i++) {
		isum += pvalue[i];
	}
	cout << "���� ���ڵ��� ����" << isum << "�Դϴ�" << endl;
}