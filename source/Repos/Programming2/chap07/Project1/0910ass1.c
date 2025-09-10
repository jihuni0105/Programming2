#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void numarray(void);

int main()
{
	numarray();
	return 0;
}

void numarray()
{
	int n,m,i;
	int a[10];

	printf("첫 번째 항? : ");
    scanf_s("%d", &n);
	printf("공차? : ");
	scanf_s("%d", &m);
	for (i = 0; i < 10; i++) {
		a[i] = n + m * i;
	}
	printf("등차수열: ");
	for(i=0; i<10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
