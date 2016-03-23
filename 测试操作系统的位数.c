#include <stdio.h>

int main()
{
	int i = 65536;
	printf("%d\n", i);
	int j = 65535;
	printf("%d\n", j);
	
	unsigned int a = ~0;
	if (a > 65536)
		printf("32λ\n");
	else
		printf("16λ\n");
		
	printf("0x%x\n", a); 
	return 0;
} 
