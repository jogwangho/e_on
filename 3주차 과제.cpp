#include <iostream>
using namespace std;

int isum=0;
int ivalue[6]; // 배열 선언
int i;  // 배열의 합 초기화

void result()
{

	for (i = 0; i < 6; i++)
	{
		cout << i + 1 << "번째 숫자를 입력하시오 :";
		cin >> ivalue[i];
		isum = isum + ivalue[i];
	}
}

int main() 
{
	result();
	cout << "다음 숫자들의 합은 " << isum << "입니다";
}

