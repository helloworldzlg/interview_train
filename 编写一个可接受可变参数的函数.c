#include <stdio.h>

int add(int num,...)
{
	int sum = 0;
	int index = 0;
	int *p = NULL;
	p = (int*)&num;
	printf("0x%x\n", *p);
	p++;	
	printf("0x%x\n", *p);
	p++;	
	printf("0x%x\n", *p);	
	p++;	
	printf("0x%x\n", *p);	
	for (; index < (int)num; ++index)
	{
		sum += *p;
		p++;
		printf("%d %d %d\n", index, sum, *p);
	}
	
	return sum;
}

int main()
{
	int i = 1;
	int j = 2;
	int k = 3;
	
	printf("%d\n", add(3, i, j, k));
	
	return 0;
}
