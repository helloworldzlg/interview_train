#include <stdio.h>

void test_1(int a, int b)
{
	a = 3;
	b = 4;
	
	return;
}

void test_2(int *pa, int *pb)
{
	*pa = 3;
	*pb = 4;
	
	return;
}

void test_3(int **pa, int **pb)
{
	int *pTemp = NULL;
	pTemp = *pa;
	*pa    = *pb;
	*pb    = pTemp;
	
	return;
}

int main()
{
	int a = 1;	
	int b = 2;
	int *p = &a;
	int *q = &b;
	
	printf("addr of a = 0x%x\n", p);
	printf("addr of b = 0x%x\n", q);
	
	test_1(a, b);
	printf("value of a = %d\n", a);
	printf("value of b = %d\n", b);
	
	test_2(&a, &b);
	printf("value of a = %d\n", a);
	printf("value of b = %d\n", b);
	
	test_3(&p, &q);
	printf("value of p = 0x%x\n", p);
	printf("value of q = 0x%x\n", q);
			
	return 0;
}
