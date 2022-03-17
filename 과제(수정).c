#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mysum(int *pvalue);

int main(void) {
	int pvalue[6] = { 0 };

	printf("원하는 숫자 6개를 입력해주세요 : ");
	scanf_s("%d,%d,%d,%d,%d,%d", &pvalue[0], &pvalue[1], &pvalue[2], &pvalue[3], &pvalue[4], &pvalue[5]);
}

int mysum(int *pvalue) {
	int isum=0;
	for (int i = 0; i < 6; i++) {
		isum += pvalue[i];
	}
	printf("다음 숫자들의 합은 %d 입니다", isum);
}	


