#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int i, j, k, l, temp;
	int array[6] = {0};
	printf("[ ���� ������ ������ 6���� ���ڸ� �Է��Ͻÿ� ] : ");
	scanf_s("%d,%d,%d,%d,%d,%d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5]);
		for (i = 0; i < 6; i++) {
			for (j = 0; j < 5 - i; j++) {
				if (array[j] > array[j + 1]) {
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
				}
			}
		}
	for (i = 0; i < 6; i++) {
		printf("%d", array[i]);
	}
	return 0;
}