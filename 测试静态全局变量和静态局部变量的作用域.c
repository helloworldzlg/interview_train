#include <stdio.h>
 
static int j;
int k = 0;
int m;

void fun1()
{
	static int i = 0;
	i++;
	m = i;
}

void fun2()
{
	j = 0;
	j++;
}

int main()
{
	for (k=0; k < 10; k++)
	{
		fun1();
		fun2();
	}
	
	printf("%d\n", m);
	printf("%d\n", j);
	
	return 0;
}
