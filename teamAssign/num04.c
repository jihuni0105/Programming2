#include <stdio.h>
int findGCD(), findLCM();

int main() {
	int a, b;
	printf("최소공배수와 최대공약수\n");
	printf("두 개의 숫자를 입력합니다\n");
	printf("첫 번째 숫자: ");
	scanf_s("%d", &a);
	printf("두 번째 숫자: ");
	scanf_s("%d", &b);
	printf("최대공약수: %d\n", findGCD(a, b));
	printf("최소공배수: %d\n", findLCM(a, b));
}

int findGCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b; // 나머지를 b에 저장
		a = temp;  // 이전 b 값을 a에 저장
	}
	// b가 0이 되면, a에 최소공약수가 저장됨
	return a;
}

int findLCM(int a, int b) 
{
	if(a == 0 || b == 0) {
		return 0; // 둘 중 하나라도 0이면 LCM은 0
	}
	int gcd = findGCD(a, b);
	return (a / gcd ) * b;