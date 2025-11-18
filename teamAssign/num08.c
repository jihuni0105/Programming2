#include <stdio.h>
void calcFat();
void printResult();
int height, weight;
float avgweight, bmi, fat;

int main(int height, int weight)
{
	printf("비만도 측정 program\n");
	printf("신장(cm)을 입력하고 ");
	scanf_s("%d", &height);
	printf("체중(kg)을 입력하고 ");
	scanf_s("%d", &weight);
	calcFat(weight, height);
	printResult(weight, height);

	return 0;
}

void calcFat(int weight, int height)
{
	avgweight = (height - 100) * 0.9;
	bmi = weight / ((height / 100.0f) * (height / 100.0f));
	fat = ((weight - avgweight) / avgweight) * 100;
}

void printResult(int weight, int height)
{
	printf("판정 결과\n");
	printf("표준체중(kg) : %.1f", avgweight);
	printf("\nBMI : %.1f", bmi);
	if
		(bmi < 20) {
		printf("\n지수에 의한 비만 판정 : 저체중");
	}
	else if (bmi >= 20 && bmi < 24) {
		printf("\n지수에 의한 비만 판정 : 정상체중");
	}
	else if (bmi >= 25 && bmi < 30) {
		printf("\n지수에 의한 비만 판정 : 과체중");
	}
	else {
		printf("\n지수에 의한 비만 판정 : 비만");
	}
	printf("\n비만도(%%) : %.1f", fat);
	if
		(fat < 10) {
		printf("\n비만도에 의한 비만 판정 : 정상체중");
	}
	else if (fat >= 10 && fat < 20) {
		printf("\n비만도에 의한 비만 판정 : 과체중");
	}
	else {
		printf("\n비만도에 의한 비만 판정 : 비만");
	}
}