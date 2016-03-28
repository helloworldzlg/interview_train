#include <stdio.h>
#include <assert.h>

char *strcpy(char *dst, char *src)
{
	assert((NULL == dst) || (NULL == src));
	
	char *address = dst;
	
	while ((*dst = *src) != '\0');
	
	return address;
}

int main()
{
	char str[] = "helloworld";
	strcpy(str, "h");
	
	printf("%s\n", str);
	
	printf("%c\n", str[0]);
	printf("%c\n", str[1]);
	printf("%c\n", str[2]);
	printf("%c\n", str[3]);
	
	return 0;	
}












 
