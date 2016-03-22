#include <stdio.h>

int my_atoi(char* str)
{
	if (NULL == str)
		return -1;
	
	while (*str == ' ')	
	{
		str++;
	}
	
	int nSign = (*str == '-') ? -1 : 1;
	
	if ((*str == '+') || (*str == '-') )
		str++;
		
	int nResult = 0;
	while ((*str >= '0') && (*str <= '9'))
	{
		nResult = nResult*10 + (*str - '0');
		*str++;
	}
	
	return nResult * nSign;
}
 
int main()
{
	printf("%d\n", my_atoi(" -12345678"));
	
	return 0;
} 






















