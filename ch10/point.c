typedef struct point {
	int x;
	int y;
} Point;

void * swap(Point *pa, Point * pb) {
	if (pa == NULL || pb == NULL) {
		return NULL;
	}
	Point tmp = *pa;
	*pa = *pb;
	*pb = tmp;

	return pa;
}

int test_point() {
	Point p1 = { 1,2 };
	Point p2 = { 3,4 };

	Point p3 = { 0 };
	//swap(&p1, &p2);

	p3 = mul10(p1);

	swap(&p1, &p2);

	return 0;
}

Point mul10(Point pt)
{
	Point pr = { 0 };
	pr.x *= 10;
	pr.y *= 10;

	return pr;
}