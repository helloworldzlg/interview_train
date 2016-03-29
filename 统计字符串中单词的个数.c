#include <stdio.h>

int main()
{
	char str[1000];
	int i,count = 0,word = 0;
	char c;
	gets(str);
	
	for (i = 0; (c = str[i]) != '\0'; i++)
	{
		if (c == ' ')
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			count++;
		}
	}
	
	printf("the sum of word is %d\n", count);
	
	return 0;
} 












