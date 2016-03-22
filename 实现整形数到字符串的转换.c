#include <stdio.h>

char* my_itoa(int num)
{
	char str[1000];
	int sign = num, i = 0, j = 0;
	char temp[11];
	
	if (sign < 0)
		num = -num;
		
	do {
		temp[i] = num%10 + '0';
		num /= 10;
		i++;
	}while (num > 0);
	
	if (sign < 0)
		temp[i++] = '-';
		
	temp[i] = '\0';
	i--;
	
	while(i >= 0) 
	{
		str[j] = temp[i];
		j++;
		i--;
	}
	
	str[j] = '\0';
	
	return str;
}

int main()
{
	printf("%s\n", my_itoa(-123456));
	
	return 0;
}
