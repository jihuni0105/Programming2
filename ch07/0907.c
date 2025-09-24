#include <stdio.h>
int main()
{

	test_copy_array();

	return 0;
}


int test_copy_array(void)
{
#define LEN 5
	int x[] = { 1,2,3,4,5 };
	int y[LEN] = { 0 };

	int size = sizeof(y) / sizeof(y[0]);
	copy_array(x, y, LEN);
}

void copy_array(int from[], int to[], int sz)
{
	int i = 0;

	for (i = 0; i < sz; i++) {
		to[i] = from[i];
	}
}