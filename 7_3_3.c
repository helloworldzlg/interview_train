#include <stdio.h>

typedef struct
{
	char a;
	double b;
}TEST_SIZEOF_STRUCT1_S;

typedef struct
{	
	double a;
	char b;
}TEST_SIZEOF_STRUCT2_S;

int main()
{
	TEST_SIZEOF_STRUCT1_S strA;
	TEST_SIZEOF_STRUCT2_S strB;
	
	printf("size of strA = %d\n", sizeof(strA));
	printf("addr of strA = 0x%x\n", &strA);
	printf("size of strB = %d\n", sizeof(strB));
	printf("addr of strB = 0x%x\n", &strB);
	
	return 0;
}
