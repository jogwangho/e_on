#include <iostream>
using namespace std;

void mysum(int *pvalue);

int main(void) {
	int pvalue[6] = { 0 };
	int i;

	for (int i = 0; i < 6; i++) {
		cout << i+1 << "번째 숫자를 입력하시오. : ";
		cin >> pvalue[i];
	}
	mysum(pvalue);
}

void mysum(int *pvalue) {
	int isum = 0;
	for (int i = 0; i < 6; i++) {
		isum += pvalue[i];
	}
	cout << "다음 숫자들의 합은" << isum << "입니다" << endl;
}