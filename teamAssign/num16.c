#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

double angle_a, angle_b, side_ab, side_bc;

double to_radian(double degree) {
	return degree * (PI / 180.0);
}

double calculate_side_bc() {
	// 1. 각 C (도 단위) 계산: C = 180 - (A + B)
	double angle_c = 180.0 - (angle_a + angle_b);

	if (angle_a <= 0.0 || angle_b <= 0.0 || side_ab <= 0.0 || angle_c <= 0.0) {
		printf("\n[경고] 유효하지 않은 삼각형 입력이거나 세 각의 합이 180도를 초과했습니다.\n");
		side_bc = 1.0;
		return -1.0;
	}

	double A_rad = to_radian(angle_a);
	double C_rad = to_radian(angle_c);

	// 3. 사인 법칙 적용: c = a * sin(C) / sin(A)
	side_bc = side_ab * (sin(A_rad) / sin(C_rad));

	return side_bc;
}

int calcTriLength();

int main()
{
	calcTriLength();

	return 0;
}

int calcTriLength()
{
	printf("a의 각도를 입력하고 ");
	scanf_s("%lf", &angle_a);
	printf("b의 각도를 입력하고 ");
	scanf_s("%lf", &angle_b);
	printf("선분 ab의 길이를 입력하고 ");
	scanf_s("%lf", &side_ab);

	double result = calculate_side_bc();

	printf("선분a<BC>의 길이 :%.4f", side_bc);
}