#include <stdio.h>
 
#ifdef _cplusplus
	#define LANGUAGE_FLAG  0
#else
	#define LANGUAGE_FLAG  1
#endif

int main()
{
	if (LANGUAGE_FLAG) 
		printf("current language is C\n");
	else
		printf("current language is C++\n");
	
	return 0;
}

/**

#ifdef _cplusplus
	extern "C" {
#endif

#ifdef _cplusplus
}
#endif
**/










